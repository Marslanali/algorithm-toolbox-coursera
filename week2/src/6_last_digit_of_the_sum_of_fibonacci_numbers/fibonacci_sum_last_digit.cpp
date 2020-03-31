#include <iostream>

int fibonacci_sum_naive(long long n) {
    if (n <= 1)
        return n;

    long long previous = 0;
    long long current  = 1;
    long long sum      = 1;

    for (long long i = 0; i < n - 1; ++i) {
        long long tmp_previous = previous;
        previous = current;
        current = tmp_previous + current;
        sum += current;
    }

    return sum % 10;
}

int get_fibonacci_last_digit_naive(long long n) {
    // write your code here

    if (n <= 1)
        return n;

    int array[n];
    array[0] = 0;
    array[1] = 1;

    for (int i = 2; i <=n; ++i)
        array[i] = (array[i-1] + array [i-2]) % 10;

    return array[n];
}


int get_fibonacci_last_digit_fast(long long n) {
    if (n <= 1)
        return n;

    int previous = 0;
    int current = 1;

    for (int i = 0; i < n - 1; ++i) {
        int tmp_previous = previous % 10;
        previous = current % 10;
        current = tmp_previous + current % 10;
    }
    return current % 10;
}

int get_fibonacci_last_digit_fast2(long long n) {
    int new_n = (n + 2) % 60;
    int new_last = get_fibonacci_last_digit_fast(new_n);
    if (new_last == 0) {
        return 9;
    } else {
        return new_last - 1;
    }
}

int main(int argc, char**argv) {
    long long n = 0;
    std::cin >> n;
   /* std::cout << fibonacci_sum_naive(n);*/
   /* std::cout << get_fibonacci_last_digit_naive(n);
    std::cout << get_fibonacci_last_digit_fast(n);*/
    std::cout << get_fibonacci_last_digit_fast2(n);
    return 0;
}

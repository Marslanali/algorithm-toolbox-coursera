#include <iostream>

int get_fibonacci_last_digit_naive(int n) {
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


int main() {
    int n;
    std::cin >> n;
    int c = get_fibonacci_last_digit_naive(n);
    std::cout << c << '\n';
    }

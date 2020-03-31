#include <iostream>

long long lcm_naive(int a, int b) {
  for (long i = 1; i <= (long long) a * b; ++i)
    if (i % a == 0 && i % b == 0)
      return i;

  return (long long) a * b;
}

long long int lcm_fast(long long a, long long  b) {

    long long dividend = a;
    long long divisor = b;

    if (a >= b)
        divisor = a;
    else
        divisor = b;

    if (a <= b)
        dividend = a;
    else
        dividend = b;

    while (divisor != 0) {
        long long remainder = dividend % divisor;
        dividend = divisor;
        divisor = remainder;
    }
    return (a * b) / dividend;

}


int main(int argc, char** argv) {

  long long a, b;
  std::cin >> a >> b;
  /*std::cout << lcm_naive(a, b) << std::endl;*/
  std::cout << lcm_fast(a, b) << std::endl;
  return 0;
}

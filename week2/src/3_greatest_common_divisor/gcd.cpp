#include <iostream>

int gcd_naive(int a, int b) {
  int current_gcd = 1;
  for (int d = 2; d <= a && d <= b; d++) {
    if (a % d == 0 && b % d == 0) {
      if (d > current_gcd) {
        current_gcd = d;
      }
    }
  }
  return current_gcd;
}

int gcd_fast(int a, int b) {

    int dividend = a;
    int divisor = b;

    if (a >= b)
         divisor = a;
    else
        divisor = b;

    if (a<=b)
        dividend = a;
    else
        dividend = b;

    while (divisor != 0) {
        int remainder = dividend % divisor;
        dividend = divisor;
        divisor = remainder;
    }
    return dividend;

}
/*
 *
 * if b = 0:
return a
a′ ← the remainder when a is divided by b
return EuclidGCD(b, a′)
 *
 */
int main(int argc, char** argv) {
  int a, b;
  std::cin >>a>>b;
  /*std::cout << gcd_naive(a, b) << std::endl;*/
  std::cout << gcd_fast(a, b) << std::endl;
  return 0;
}

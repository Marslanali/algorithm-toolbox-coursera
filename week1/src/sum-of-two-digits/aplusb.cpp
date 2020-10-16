#include <iostream>

int32_t sum_of_two_digits(int32_t first_digit, int32_t second_digit) {
  return first_digit + second_digit;
}

int main(int argc, char** argv) {
  int32_t a = 0;
  int32_t b = 0;
  std::cin >> a;
  std::cin >> b;
  std::cout << sum_of_two_digits(a, b) << std::endl;
  return 0;
}

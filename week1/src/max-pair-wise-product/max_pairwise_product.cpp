#include <iostream>
#include <vector>

int64_t MaxPairwiseProduct(const std::vector<int32_t> &numbers) {
  int64_t max_product = 0;

  for (int32_t i = 0; i < numbers.size(); ++i) {
    for (int32_t j = i + 1; j < numbers.size(); ++j) {
      if (((int64_t)numbers[i]) * numbers[j] > max_product) {
        max_product = ((int64_t)numbers[i]) * numbers[j];
      }
    }
  }

  return max_product;
}

int64_t MaxPairwiseProductFast1(const std::vector<int32_t> &numbers) {
  int32_t n = numbers.size();

  int32_t max_index1 = -1;
  for (int32_t i = 0; i < n; ++i)
    if ((max_index1 == -1) || (numbers[i] > numbers[max_index1]))
      max_index1 = i;

  int32_t max_index2 = -1;
  for (int32_t j = 0; j < n; ++j)
    if (j != max_index1 &&
        ((max_index2 == -1) || (numbers[j] > numbers[max_index2])))
      max_index2 = j;

  std::cout << "Max number1 : " << numbers[max_index1]
            << " Index1: " << max_index1 << std::endl;
  std::cout << "Max number2 : " << numbers[max_index2]
            << " Index2: " << max_index2 << std::endl;

  return ((int64_t)(numbers[max_index1])) * numbers[max_index2];
}

int64_t MaxPairWiseProductFast2(const std::vector<int32_t> &numbers) {

  int32_t max_index1 = 0;

  for (int32_t i = 0; i < numbers.size(); ++i)
    if (numbers[i] > numbers[max_index1])
      max_index1 = i;
  int32_t max_index2 = 0;

  for (int32_t j = 0; j < numbers.size(); ++j)
    //  if (numbers[j] != numbers[max_index1] && numbers[j] >
    //  numbers[max_index2])
    if (j != max_index1 && numbers[j] > numbers[max_index2])
      max_index2 = j;

  std::cout << "Max number1 : " << numbers[max_index1]
            << " Index1: " << max_index1 << std::endl;
  std::cout << "Max number2 : " << numbers[max_index2]
            << " Index2: " << max_index2 << std::endl;
  return ((int64_t)numbers[max_index1]) * numbers[max_index2];
}

int main(int32_t argc, char **argv) {

  while (true) {
    int32_t n = rand() % 4000 + 2;
    std::cout << n << "\n";
    std::vector<int32_t> a;
    for (int32_t i = 0; i < n; ++i) {
      a.push_back(rand() % 100000);
    }

    for (int32_t j = 0; j < n; ++j) {
      std::cout << a[j] << " ";
    }
    std::cout << "\n";

    int64_t result1 = MaxPairwiseProduct(a);
    int64_t result2 = MaxPairwiseProductFast1(a);

    if (result1 != result2) {
      std::cout << "Wrong answer: " << result1 << " " << result2 << std::endl;
      break;
    } else {
      std::cout << "Correct answer" << std::endl;
    }
  }

  return 0;
}

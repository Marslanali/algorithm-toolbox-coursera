#include <cassert>
#include <iostream>
#include <vector>

int binary_search_iterative(const std::vector<int>& a, int x) {
  int left = 0, right = (int)a.size();
  while (left <= right) {
    int mid = left + (right - left) / 2;
    if (x == a[mid])
      return mid;
    else if (x < a[mid])
      right = mid - 1;
    else
      left = mid + 1;
  }
  return -1;
}

int linear_search(const std::vector<int>& a, int x) {
  for (size_t i = 0; i < a.size(); ++i) {
    if (a[i] == x) return i;
  }
  return -1;
}

int binary_search(const std::vector<int>& a, int x) {
  int left = 0, right = (int)a.size();
  // write your code here
  while (left <= right) {
    int mid = (left + right) / 2;

    if (a[mid] == x)
      return mid;

    else if (a[mid] > x)
      right = mid - 1;

    else
      left = mid + 1;
  }
  return -1;
}

int main(int argc, char** argv) {
  int n;
  std::cin >> n;
  std::vector<int> a(n);
  for (size_t i = 0; i < a.size(); i++) {
    std::cin >> a[i];
  }
  int m;
  std::cin >> m;
  std::vector<int> b(m);
  for (int i = 0; i < m; ++i) {
    std::cin >> b[i];
  }
  for (int i = 0; i < m; ++i) {
    // replace with the call to binary_search when implemented
    std::cout << binary_search(a, b[i]) << ' ';
  }

  return 0;
}
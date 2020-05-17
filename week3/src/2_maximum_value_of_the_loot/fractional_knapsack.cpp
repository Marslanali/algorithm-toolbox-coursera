#include <iostream>
#include <vector>

int get_max_index(std::vector<int> weights, std::vector<int> values) {
    int max_i = 0;
    double max = 0;

    for (int i = 0; i < weights.size(); i++) {
        if (weights[i] != 0 && (double) values[i] / weights[i] > max) {
            max = (double) values[i] / weights[i];
            max_i = i;
        }
    }
    return max_i;
}

double get_optimal_value(int capacity, std::vector<int> weights, std::vector<int> values) {
    double value = 0.0;
    // write your code here
    for (int i = 0; i < weights.size(); i++) {
        if (capacity == 0) return value;
        int index = get_max_index(weights, values);
        int a = std::min(capacity, weights[index]);
        value += a * (double) values[index] / weights[index];
        weights[index] -= a;
        capacity -= a;
    }

    return value;
}


int main(int argc, char** argv) {
  int n;
  int capacity;
  std::cin >> n >> capacity;
  std::vector<int> values(n);
  std::vector<int> weights(n);
  for (int i = 0; i < n; i++) {
    std::cin >> values[i] >> weights[i];
  }

  double optimal_value = get_optimal_value(capacity, weights, values);

  std::cout.precision(10);
  std::cout << optimal_value << std::endl;
  return 0;
}

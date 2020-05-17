#include <iostream>
#include <vector>

long long MaxPairwiseProduct(const std::vector<int>& numbers) {
    long long max_product = 0;

    for (int i = 0; i < numbers.size(); ++i) {
        for (int j = i + 1; j < numbers.size(); ++j) {
            if (((long long)numbers[i]) * numbers [j] > max_product){
                max_product = ((long long)numbers[i]) * numbers[j];
            }
        }
    }

    return max_product;
}

long long MaxPairwiseProductFast1(const std::vector<int>& numbers) {
    int n = numbers.size();

    int max_index1 = -1;
    for (int i = 0; i < n; ++i)
        if ((max_index1 == -1) || (numbers[i] > numbers[max_index1]))
            max_index1 = i;

    int max_index2 = -1;
    for (int j = 0; j < n; ++j)
        if (j != max_index1 && ((max_index2 == -1) || (numbers[j] > numbers[max_index2])))
            max_index2 = j;

    std::cout<<"Max number1 : "<< numbers[max_index1] <<" Index1: " << max_index1 << std::endl;
    std::cout<<"Max number2 : "<< numbers[max_index2] <<" Index2: " << max_index2 << std::endl;

    return ((long long)(numbers[max_index1])) * numbers[max_index2];
}


long long MaxPairWiseProductFast2 (const std::vector<int>& numbers){

    int max_index1 = 0;

    for (int i = 0; i < numbers.size(); ++i)
        if (numbers[i] > numbers[max_index1])
            max_index1 = i;
    int max_index2 = 0;

    for (int j = 0; j < numbers.size(); ++j)
      //  if (numbers[j] != numbers[max_index1] && numbers[j] > numbers[max_index2])
            if (j != max_index1 && numbers[j] > numbers[max_index2])
            max_index2 = j;

    std::cout<<"Max number1 : "<< numbers[max_index1] <<" Index1: " << max_index1 << std::endl;
    std::cout<<"Max number2 : "<< numbers[max_index2] <<" Index2: " << max_index2 << std::endl;
    return ((long long)numbers[max_index1]) * numbers[max_index2];

}


int main(int argc, char** argv) {

    while (true){
        int n = rand() % 4000 + 2;
        std::cout << n << "\n";
        std::vector<int> a;
        for (int i = 0; i < n; ++i) {
            a.push_back(rand() % 100000);
        }

        for (int j = 0; j < n; ++j) {
            std::cout << a[j] << " ";
        }
        std::cout<<"\n";

        long long result1 = MaxPairwiseProduct(a);
        long long result2 = MaxPairwiseProductFast1(a);

        if (result1 != result2){
            std::cout<< "Wrong answer: " << result1 << " " << result2 << std::endl;
            break;
        }
        else{
            std::cout << "Correct answer" << std::endl;

        }
    }


/*
    int n;
    std::cin >> n;
    std::vector<int> numbers(n);
    for (int i = 0; i < n; ++i) {
        std::cin >> numbers[i];
    }

    std::cout << MaxPairwiseProductFast1(numbers) << "\n";
*/

    return 0;
}

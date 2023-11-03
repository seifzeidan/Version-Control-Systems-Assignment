#include <iostream>
#include <vector>


int getSum(const std::vector<int>& vec) {
    int sum = 0;
    for (int i = 0; i < vec.size(); ++i) {
        sum += vec[i];
    }
    return sum;
}

int main() {
    
    std::vector<int> elements = {2, 0, 1, 3, 4, 5, 22, 43, 12, 56};
    int sum = getSum(elements);
    std::cout << "Sum of elements : " << sum << std::endl;

    return 0;
}

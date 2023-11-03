#include <iostream>
#include <vector>


int getSum(const std::vector<int>& vec) {
    int sum = 0;
    for (int i = 0; i < vec.size(); ++i) {
        sum += vec[i];
    }
    return sum;
}
double getAverage(const std::vector<int>& vec) {
    if (vec.empty()) {
        return 0.0; 
    }

    int sum = getSum(vec); 
    double average = static_cast<double>(sum) / vec.size();
    return average;
}


int main() {
    
    std::vector<int> elements = {2, 0, 1, 3, 4, 5, 22, 43, 12, 56};
    int sum = getSum(elements);
    std::cout << "Sum of elements : " << sum << std::endl;
    double average = getAverage(elements);
    std::cout << "Average of elements : " << average << std::endl;	

    return 0;
}

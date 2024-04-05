#include <vector>
#include <algorithm>
#include <iostream>

class Tensor {
public:
    void sort(std::vector<int>& v) {
        std::cout << "Given array: ";
        for(const auto& i : v) {
            std::cout << i << " ";
        }
        std::cout << std::endl;

        std::sort(v.begin(), v.end());

        std::cout << "Sorted array: ";
        for(const auto& i : v) {
            std::cout << i << " ";
        }
        std::cout << std::endl;
    }
};

int main() {
    Tensor tensor;
    std::vector<int> v = {5, 3, 1, 4, 2};
    tensor.sort(v);
    
    return 0;
}

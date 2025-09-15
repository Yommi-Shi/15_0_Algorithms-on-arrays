#include <iostream>
#include <vector>


void ascending_order(std::vector<int> vec) {
    int right = 0;
    while (right < vec.size() && vec[right] < 0) {
        right++;
    }

    int left = right - 1;
    while (left >= 0 && right < vec.size()) {
        if (vec[right] > -vec[left]) {
            std::cout << vec[left--] << " ";
        }
        else {
            std::cout << vec[right++] << " ";
        }
    }
    while (left >= 0) {
        std::cout << vec[left--] << " ";
    }
}


int main() {
    std::cout << "===04_Task===" << std::endl;

    std::vector<int> vec = {-100, -50, -5, 1, 10, 15};

    ascending_order(vec);

}

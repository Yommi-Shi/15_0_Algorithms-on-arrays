#include <iostream>
#include <vector>


void insert_num(std::vector<int>& vec, int num) {
    if (vec.size() < 5 || num < vec[4]) {
        for (int i = 0; i < vec.size(); i++) {
            if (num <= vec[i]) {
                std::swap(vec[i], num);
            }
        }
        if (vec.size() < 5) {
            vec.push_back(num);
        }
    }
}


int main() {
    std::cout << "03_Task" << std::endl;

    std::vector<int> vec(0);

    int num;

    while (true) {
        std::cout << "Enter number:";
        std::cin >> num;
        if (num == -2) {
            std::cout << "Finishing the program";
            return 0;
        } else if (num == -1) {
            if (vec.size() > 4) {
                std::cout << "Num: " << vec[4] << std::endl;
            } else {
                std::cout << "There are not enough numbers entered to display the fifth in ascending order." << std::endl;
            }
        } else {
            insert_num(vec, num);
        }
    }

}

#include <iostream>
#include <vector>


void insert_num(std::vector<int> vec) {
    for (int i = 0; i < vec.size(); i++) {
        for (int j = 0; j < vec.size() - i - 1; j++) {
            if (vec[j] > vec[j + 1]) {
                int temp = vec[j];
                vec[j] = vec[j + 1];
                vec[j + 1] = temp;
            }
        }
    }
    vec.resize(5);
    std::cout << "Num: " << vec[4] << std::endl;

}


int main() {
    std::cout << "03_Task" << std::endl;

    std::vector<int> vec;

    int num;

    while (true) {
        std::cout << "Enter number:";
        std::cin >> num;
        if (num == -2) {
            std::cout << "Finishing the program";
            return 0;
        } else if (num == -1) {
            if (vec.size() < 5) {
                std::cout << "There are not enough numbers entered to display the fifth in ascending order." << std::endl;
            } else {
                insert_num(vec);
            }
        } else {
            vec.push_back(num);
        }
    }

}

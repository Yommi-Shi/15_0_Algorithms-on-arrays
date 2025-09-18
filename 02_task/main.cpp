#include <iostream>
#include <vector>


void find_pair(int array[], int res, int size) {
    bool find = false;
    for (int i = 0; i < size; i++) {
        for (int j = i; j < size; j++) {
            if (array[i] + array[j] == res && i != j) {
                std::cout << array[i] << " " << array[j] << std::endl;
                return;
            }
        }
    }

    if (!find) {
        std::cout << "pair not found";
    }
}

int main() {
    std::cout << "===Task_02===\n";

    int array[] = {2, 7, 11, 15};
    int res = 9;

    find_pair(array, res, 4);
}

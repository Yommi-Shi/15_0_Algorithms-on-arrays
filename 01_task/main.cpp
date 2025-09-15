#include <iostream>


void kadane(int array[], int size) {

    int max_sum = 0;
    int current_sum = 0;
    int start = 0;
    int max_start = 0;
    int max_end = 0;

    for (int i = 0; i < size; ++i) {
        if (current_sum <= 0) {
            current_sum = array[i];
            start = i;
        }
        else {
            current_sum += array[i];
        }

        if (current_sum > max_sum) {
            max_sum = current_sum;
            max_start = start;
            max_end = i;
        }
    }

    std::cout << "Maximum subsegment amount:" << max_sum << "\n";
    std::cout << "Indexes i and j:" << max_start << " " << max_end << std::endl;
}

int main() {
    std::cout << "===Task_01===\n";

    int array[] = {-2, 1, -3, 4, -1, 2, 1, -5, 4};

    kadane(array, 9);
}
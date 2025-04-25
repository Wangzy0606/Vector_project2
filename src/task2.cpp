#include "../include/tasks.h"

void task2() {
    int input_1;
    do {
        std::cout << "Please enter a positive integer greater than 64: ";
        std::cin >> input_1;
    } while (input_1 <= 64 || input_1 <= 0);

    std::vector<int> result = {1};
    for (int i = 0; i < input_1; ++i) {
        int carry = 0;
        for (int& digit : result) {
            int product = digit * 2 + carry;
            digit = product % 10;
            carry = product / 10;
        }
        if (carry > 0) {
            result.push_back(carry);
        }
    }
    for (auto it = result.rbegin(); it != result.rend(); ++it) {
        std::cout << *it;
    }
    std::cout << std::endl;
}    
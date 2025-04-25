#include "../include/tasks.h"

void task1() {
    int input_1;
    do {
        std::cout << "Please enter a positive integer greater than 100: ";
        std::cin >> input_1;
    } while (input_1 <= 100 || input_1 <= 0);

    std::vector<int> result = {1};
    for (int i = 2; i <= input_1; ++i) {
        int carry = 0;
        for (int& digit : result) {
            int product = digit * i + carry;
            digit = product % 10;
            carry = product / 10;
        }
        while (carry > 0) {
            result.push_back(carry % 10);
            carry /= 10;
        }
    }
    for (auto it = result.rbegin(); it != result.rend(); ++it) {
        std::cout << *it;
    }
    std::cout << std::endl;
}    
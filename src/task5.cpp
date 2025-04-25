#include "../include/tasks.h"

void task5() {
    int input_1;
    do {
        std::cout << "Please enter a positive integer greater than 100: ";
        std::cin >> input_1;
    } while (input_1 <= 100 || input_1 <= 0);

    if (input_1 == 1) {
        std::cout << 1 << std::endl;
        return;
    }
    if (input_1 == 2) {
        std::cout << 1 << std::endl;
        return;
    }
    std::vector<int> prev = {1};
    std::vector<int> current = {1};
    for (int i = 3; i <= input_1; ++i) {
        std::vector<int> next;
        int carry = 0;
        for (size_t j = 0; j < std::max(prev.size(), current.size()); ++j) {
            int sum = carry;
            if (j < prev.size()) sum += prev[j];
            if (j < current.size()) sum += current[j];
            next.push_back(sum % 10);
            carry = sum / 10;
        }
        if (carry > 0) {
            next.push_back(carry);
        }
        prev = current;
        current = next;
    }
    for (auto it = current.rbegin(); it != current.rend(); ++it) {
        std::cout << *it;
    }
    std::cout << std::endl;
}    
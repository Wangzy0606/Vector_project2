#include "../include/tasks.h"

void task3() {
    int input_1, input_2;
    do {
        std::cout << "Please enter two positive integers greater than 64: ";
        std::cin >> input_1 >> input_2;
    } while (input_1 <= 64 || input_1 <= 0 || input_2 <= 64 || input_2 <= 0);

    std::vector<int> num1 = {1};
    std::vector<int> num2 = {1};
    for (int i = 0; i < input_1; ++i) {
        int carry = 0;
        for (int& digit : num1) {
            int product = digit * 2 + carry;
            digit = product % 10;
            carry = product / 10;
        }
        if (carry > 0) {
            num1.push_back(carry);
        }
    }
    for (int i = 0; i < input_2; ++i) {
        int carry = 0;
        for (int& digit : num2) {
            int product = digit * 2 + carry;
            digit = product % 10;
            carry = product / 10;
        }
        if (carry > 0) {
            num2.push_back(carry);
        }
    }
    while (num1.size() < num2.size()) num1.push_back(0);
    while (num2.size() < num1.size()) num2.push_back(0);
    std::vector<int> sum;
    int carry = 0;
    for (size_t i = 0; i < num1.size(); ++i) {
        int temp = num1[i] + num2[i] + carry;
        sum.push_back(temp % 10);
        carry = temp / 10;
    }
    if (carry > 0) {
        sum.push_back(carry);
    }
    for (auto it = sum.rbegin(); it != sum.rend(); ++it) {
        std::cout << *it;
    }
    std::cout << std::endl;
}    
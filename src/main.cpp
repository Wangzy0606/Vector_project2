#include "../include/tasks.h"

int main() {
    int choice;
    while (true) {
        std::cout << "\nSelect a function:\n"
                  << "1. Calculate factorial of a number greater than 100\n"
                  << "2. Calculate 2^n where n > 64\n"
                  << "3. Calculate 2^n1 + 2^n2 where n1, n2 > 64\n"
                  << "4. Calculate 2^n1 - 2^n2 where n1, n2 > 64 and n1 > n2\n"
                  << "5. Calculate the nth Fibonacci number where n > 100\n"
                  << "0. Exit\n"
                  << "Enter your choice: ";
        std::cin >> choice;

        if (choice == 0) {
            break;
        }

        switch (choice) {
            case 1: task1(); break;
            case 2: task2(); break;
            case 3: task3(); break;
            case 4: task4(); break;
            case 5: task5(); break;
            default:
                std::cout << "Invalid choice. Please try again." << std::endl;
        }
    }

    return 0;
}
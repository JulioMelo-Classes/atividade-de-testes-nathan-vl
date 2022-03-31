#include <iostream>
#include <array>
#include <string>

const int SIZE = 5;

int main(void)
{
    int total = 0;
    for (auto i = 0; i < SIZE; ++i) {
        std::string input;
        std::cin >> input;

        total += input[0] == '-';
    }

    std::cout << total << std::endl;

    return 0;
}

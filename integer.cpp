// Copyright [2022] <Mr. Kent>"  [legal/copyright]
//
// Date : 10 - 13 - 22
// This program checks if the user given integer is positive or negative # or 0.

#include <iostream>

int main() {
    int userInteger;
    std::cout << "What is your integer?: ";
    std::cin >> userInteger;
    if (userInteger == 0) {
        std::cout << userInteger << " is just 0" << std::endl;
    } else if (userInteger > 0) {
        std::cout << userInteger << " is positive" << std::endl;
    } else {
        std::cout << userInteger << " is negative" << std::endl;
    }
}

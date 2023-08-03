// SSBS1_Operand.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
char add = '+';
char multiply = '*';
char sub = '-';
char divide = '/';


int main()
{
    std::cout << "Enter a operand (+,-,*,/) followed by two numbers. The program will perform the operation: ";
    char operand;
    double var1;
    double var2;
    while (std::cin >> operand >> var1 >> var2) {
        switch (operand) {
        case '+':
            std::cout << (var1 + var2) << "\n";
            break;
        case '-':
            std::cout << (var1 - var2) << "\n";
            break;
        case '*':
            std::cout<<(var1 * var2) << "\n";
            break;
        case '/':
            std::cout << (var1 / var2)<<"\n";
            break;
        default:
            std::cout << "Thats not a valid operand\n";
            continue;
        }
    }
}
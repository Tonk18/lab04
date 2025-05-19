#include <solver.h>
#include <iostream>

int main() {
    std::string equation;
    std::cout << "Enter equation: ";
    std::getline(std::cin, equation);
    std::cout << solver::solve(equation) << std::endl;
    return 0;
}
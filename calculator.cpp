#include <iostream>

int main()
{
    char selection{};
    double result{}, num1{}, num2{};
    std::cout << "enter number\n";
    std::cin >> num1;
    std::cout << "select: +, -, *, /, =\n";
    std::cin >> selection;
    std::cout << "enter number\n";
    std::cin >> num2;
    switch (selection)
    {
    case '+':
        result = num1 + num2;
        break;
    case '-':
        result = num1 - num2;
        break;
    case '*':
        result = num1 * num2;
        break;
    case '/':
        if (num2 == 0)
            break;
        result = num1 / num2;
        break;
    case '=':
        std::cout << result;
        break;
    default:
        std::cout << "please select valid option";
    }
    while (selection != '=')
    {
        std::cout << "select: +, -, *, /, =\n";
        std::cin >> selection;
        if (selection != '=')
        {
            std::cout << "enter number\n";
            std::cin >> num2;
        }
        switch (selection)
        {
        case '+':
            result += num2;
            break;
        case '-':
            result -= num2;
            break;
        case '*':
            result *= num2;
            break;
        case '/':
            if (num2 == 0)
                result = static_cast<double>(1e+300 * 1e+300);
            break;
            result /= num2;
            break;
        case '=':
            std::cout << result;
            break;
        defalut:
            std::cout << "please select valid option";
        }
    }
}
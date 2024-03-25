#include <iostream>
#include <vector>
#include <string>
class Car
{
public:
    std::string brand;
    std::string model;
    int year;

    void displayCar(Car &samochod)
    {
        std::cout << "marka: " << samochod.brand << '\n'
             << "model: " << samochod.model << '\n'
             << "rok produkcji: " << samochod.year << '\n';
    }
};

Car createCar()
{
    Car samochod;
    std::cout << "podaj marke:\n";
    getline(std::cin, samochod.brand);
    std::cout << "podaj model:\n";
    getline(std::cin, samochod.model);
    std::cout << "podaj rok produkcji:\n";
    std::cin >> samochod.year;
    return samochod;
}
std::string mergeStrings()
{
    std::string result;
    std::string temp;

    std::cout << "Enter string 1:\n";
    getline(std::cin, temp);
    result += temp + ' ';

    std::cout << "Enter string 2:\n";
    getline(std::cin, temp);
    result += temp + ' ';

    std::cout << "Enter string 3:\n";
    getline(std::cin, temp);
    result += temp;

    return result;
}
void compareStrings()
{
    std::string str1;
    std::cout << "Enter string 1: ";
    getline(std::cin, str1);
    std::string str2;
    std::cout << "Enter string 2: ";
    getline(std::cin, str2);

    if (str1 == str2)
    {
        std::cout << "these strings are identical" << '\n';
    }
    else
    {
        std::cout << "these strings are not the same" << '\n';
    }
}
void strBelongs()
{
    std::string str1, str2;
    std::cout << "enter string\n";
    std::cin >> str1;
    std::cout << "enter sub string to find\n";
    std::cin >> str2;
    if (str1.find(str2) != std::string::npos)
    {
        std::cout << "yes\n";
    }
    else
    {
        std::cout << "no\n";
    }
}
void withWhiteSpace()
{
    std::string miejscowosc;
    std::cout << "podaj nazwe miejscowości: ";
    std::getline(std::cin, miejscowosc);
    std::cout << miejscowosc << '\n';
}
void replace()
{
    std::string str = "C++, Javascript, C#";
    std::string old_substr = "Javascript";
    std::string new_substr = "Java";
    std::size_t pos = str.find(old_substr);
    if (pos != std::string::npos)
    {
        str.replace(pos, old_substr.length(), new_substr);
    }
    std::cout << str << '\n';
}
int main()
{
    // ex 1
    //  Car samochod = createCar();
    //  samochod.displayCar(samochod);
    // ex 2
    //  std::cout<<mergeStrings()<<'\n';
    // ex 3
    // compareStrings();
    // ex 4
    // strBelongs();
    // ex 5
    // withWhiteSpace();
    // ex 6
    // replace();
}
#include <iostream>
#include <cstring>
#include <vector>
#include <limits>
using namespace std;
class Car
{
public:
    char brand[20]{};
    char model[20]{};
    int year{};
    void displayCar(Car samochod)
    {
        cout << "marka: " << samochod.brand << '\n'
             << "model: " << samochod.model << '\n'
             << "rok produkcji: " << samochod.year << '\n';
    }
};
Car createCar()
{
    Car samochod;
    cout << "podaj marke:\n";
    cin >> samochod.brand;
    cout << "podaj model:\n";
    cin >> samochod.model;
    cout << "podaj rok produkcji:\n";
    cin >> samochod.year;
    return samochod;
}
char *mergeCStrings()
{
    cout << "Enter string 1:\n";
    char str1[20];
    cin >> str1;
    cout << "Enter string 2:\n";
    char str2[20];
    cin >> str2;
    cout << "Enter string 3:\n";
    char str3[20];
    cin >> str3;
    char *result = new char[30];
    strcat(result, str1);
    strcat(result, str2);
    strcat(result, str3);
    cout << result;
    return result;
}
void compareCStrings(){
    cout << "Enter string 1:\n";
    char str1[20];
    cin >> str1;
    cout << "Enter string 2:\n";
    char str2[20];
    cin >> str2;
    if (strcmp(str1, str2) == 0){
        cout << "these strings are identical";
    }else{
        cout << "these strings are not the same";
    }
}
void strBelongs(){
    cout << "Enter string 1:\n";
    char str1[20];
    cin >> str1;
    cout << "Enter string 2:\n";
    char str2[20];
    cin >> str2;
    if(strstr(str1,str2) != NULL){
        cout << "yes";
    }else{
        cout << "no";
    }
}
void withWhiteSpace(){
    cout << "podaj nazwe miejscowości\n";
    char miejscowosc[20];
    cin.get(miejscowosc, 20);
    cout << miejscowosc << endl;
    cin.ignore(numeric_limits<std::streamsize>::max(), '\n');
}
void replace(){
    std::string str = "C++, Javascript, C#";
    std::string old_substr = "Javascript";
    std::string new_substr = "Java";
    size_t pos = str.find(old_substr);
    if (pos != std::string::npos)
    {
        str.replace(pos, old_substr.length(), new_substr);
        std::cout << str << std::endl; // Output: Hello C++
    }
}
int main()
{
    // ex 1
    //  Car samochod = createCar();
    //  samochod.displayCar(samochod);
    // ex 2
    //  mergeCStrings();
    //ex 3
    // compareCStrings();
    //ex 4
    // strBelongs();
    //ex 5
    // withWhiteSpace();
    //ex 6
    replace();
}
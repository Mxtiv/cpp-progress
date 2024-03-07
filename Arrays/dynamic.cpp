#include <iostream>
#include <string>
using namespace std;

struct Osoba
{
    short wiek{};
    string imie;
    string nazwisko;
};
Osoba *create(int size)
{
    Osoba *ludzie = new Osoba[size];
    return ludzie;
}
void fill(Osoba ludzie[], int size)
{
    for (int i{}; i < size; i++)
    {
        cout << "podaj wiek osoby " << i + 1 << '\n';
        cin >> ludzie[i].wiek;
        cout << "podaj imie osoby " << i + 1 << '\n';
        cin >> ludzie[i].imie;
        cout << "podaj nazwisko osoby " << i + 1 << '\n';
        cin >> ludzie[i].nazwisko;
    }
}
int searchByAge(Osoba *ludzie, int size)
{   
    cout << "podaj szukany wiek\n";
    int search;
    cin >> search;
    int index{-1};
    for (int i{}; i < size; i++){
        if(ludzie[i].wiek == search)
            index = i;
    }
    return index;
}
int searchByName(Osoba *ludzie, int size)
{
    cout << "podaj szukane imie\n";
    string search;
    cin >> search;
    int index{-1};
    for (int i{}; i < size; i++){
        if(ludzie[i].imie == search)
            index = i;
    }
    return index;
}
int searchByLastName(Osoba *ludzie, int size)
{
    cout << "podaj szukane nazwisko\n";
    string search;
    cin >> search;
    int index{-1};
    for (int i{}; i < size; i++){
        if(ludzie[i].nazwisko == search)
            index = i;
    }
    return index;
}
int main()
{   
    cout << "Podaj rozmiar tablicy\n";
    int size;
    cin >> size;
    Osoba *ludzie = create(size);
    fill(ludzie, size);
    bool flag = false;
    cout << "chcesz przeszukać tablice?  0/1\n";
    cin >> flag;
    if (flag == true)
    {
        cout << "co chcesz wyszukać\nw - wiek\ni - imie\nn - nazwisko\n";
        char select{};
        cin >> select;
        int result;
        switch (select)
        {
        case 'w':
            result = searchByAge(ludzie, size);
            if(result != -1){
                cout << "znalezione na id:  " << result << '\n';
            }else{
                cout << "nie znaleziono\n";
            }
            break;
        case 'i':
            result = searchByName(ludzie, size);
            if (result != -1)
            {
                cout << "znalezione na id:  " << result << '\n';
            }
            else
            {
                cout << "nie znaleziono\n";
            }
            break;
        case 'n':
            result = searchByLastName(ludzie, size);
            if (result != -1)
            {
                cout << "znalezione na id:  " << result << '\n';
            }
            else
            {
                cout << "nie znaleziono\n";
            }
            break;
        default:
            cout << "nieznany wybór\n";
        }
    }
    return 0;
}
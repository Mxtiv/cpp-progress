#include <iostream>
using namespace std;
struct Ocena
{
    double ocena;
    double waga;
};
Ocena *wypelnij2(int rozmiar)
{
    Ocena *oceny;
    oceny = new Ocena[rozmiar];
    for (short i = 0; i < rozmiar; i++)
    {
        cout << "podej kolejna ocena";
        cin >> oceny[i].ocena;
        cout << "podej kolejna waga";
        cin >> oceny[i].waga;
    }
    return oceny;
}
double srednia(Ocena *oceny, int rozmiar)
{
    double licznik{}, mianownik{};
    for (short i = 0; i < rozmiar; i++)
    {
        licznik += oceny[i].ocena * oceny[i].waga;
        mianownik += oceny[i].waga;
    }
    return licznik / mianownik;
}
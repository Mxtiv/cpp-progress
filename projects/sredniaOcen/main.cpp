#include <iostream>
#include "header.h"
using namespace std;
int main()
{
    int liczbaOcen;
    cout << "ile ocen i wag chcesz wpisac?" << endl;
    cin >> liczbaOcen;
    Ocena *oceny;
    oceny = wypelnij2(liczbaOcen);
    cout << srednia(oceny, liczbaOcen);
}
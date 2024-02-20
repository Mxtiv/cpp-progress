#include <fstream>
#include <iostream>
#include <cstdlib>
using namespace std;

void wypisz(int numery[], int rozmiar)
{
    for (short i = 0; i < rozmiar; i++)
    {
        cout << numery[i] << " ";
    }
}
void randomNumbersToFile(int n)
{
    fstream plik;
    plik.open("wyjscie.txt", ios::out);
    srand(time(NULL));
    plik << rand() % 10;
    for (int i = 1; i < n; i++)
    {
        srand(time(NULL) * (i + 1));
        plik << " " << rand() % 10;
    }
    plik.close();
}
int fileSize()
{
    fstream plik;
    plik.open("wyjscie.txt", ios::in);
    int i{};
    int zPliku{};
    while (!plik.eof())
    {
        plik >> zPliku;
        i++;
    }
    plik.close();
    return i;
}
int *fileToArray(int n)
{
    fstream plik;

    int *arr = new int[n];
    plik.open("wyjscie.txt", ios::in);
    int i{};
    int fromFile{};
    while (i <= n)
    {
        plik >> fromFile;
        arr[i] = fromFile;
        i++;
    }
    plik.close();
    return arr;
}
double averageFromArray(const int arr[], int size)
{
    double sum{};
    for (int i = 0; i < size; i++)
    {
        sum += *(arr) + i;
    }
    return sum / static_cast<double>(size);
}


#include <fstream>
#include <iostream>
#include <cstdlib>
#include "header.h"
using namespace std;
int main()
{
    randomNumbersToFile(10);

    int size = fileSize();
    int *arr = fileToArray(size);
    wypisz(arr, size);
    cout << "srednia: " << averageFromArray(arr, 10);
    return 0;
}
#include <fstream>
#include <iostream>
#include <cstdlib>
using namespace std;

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
int fileSize(){
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
    while (n <= i)
    {
        plik >> fromFile;
        arr[i] = fromFile;
        i++;
    }
    plik.close();
    return arr;
}
double averageFromArray(const int arr[], int size){
    double sum{};
    for(int i = 0;i < size; i++){
        sum += *(arr)+i;
        cout << sum << endl;
    }
    return sum / static_cast<double>(size);
}

int main()
{
    randomNumbersToFile(10);
    int size = fileSize();
    int *arr = fileToArray(size);
    cout << averageFromArray(arr, 10);
    delete [] arr;
    return 0;
}
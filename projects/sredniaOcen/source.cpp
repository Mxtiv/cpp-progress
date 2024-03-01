#include <iostream>
struct grade
{
    int grade{};
    int weight{};
};
double averageFromArray(const int arr[], int size)
{
    double sum{};
    for (int i = 0; i < size; i++)
    {
        sum += arr[i];
    }
    return sum / static_cast<double>(size);
}
double averageFromGrades()
{
    std::cout << "z ilu ocen chcesz obliczyć średnią?\n";
    int amount{};
    std::cin >> amount;
    grade *oceny = new grade[amount];
    for (int i = 0; i < amount; i++)
    {
        std::cout << "podaj ocene\n";
        std::cin >> oceny[i].grade;
        std::cout << "podaj wage\n";
        std::cin >> oceny[i].weight;
    }
    int size{};
    for (short i = 0; i < amount; i++)
    {
        for (short j = 0; j < oceny[i].weight; j++)
        {
            size++;
        }
    }
    int *doSrednia = new int[size];
    int ocena{};
    int index{};
    for (short i = 0; i < amount; i++)
    {
        ocena = oceny[i].grade;
        short j = 0;
        for (j; j < oceny[i].weight; j++)
        {
            doSrednia[i + index] = ocena;
        }
        index += j;
    }
    delete [] oceny;
    double average = averageFromArray(doSrednia,size);
    delete [] doSrednia;
    return average;
}
void wypisz(int numery[], int rozmiar)
{
    for (short i = 0; i < rozmiar; i++)
    {
        std::cout << numery[i] << " ";
    }
}
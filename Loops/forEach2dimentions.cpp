#include <iostream>

int main()
{
    int arr[4][3]{1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};
    int min = arr[0][0];

    for (auto &rows : arr)
    {
        for (auto &elem : rows)
        {
           if(min < elem)
            min = elem;
        }
    }
    std::cout << min;
}
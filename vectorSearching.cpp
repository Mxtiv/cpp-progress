#include <iostream>
#include <vector>
#include <iomanip>
#include <algorithm>
using namespace std;
int main()
{
    int val;
    vector<int> numbers{7,121,1,9};
    cin >> val;
    auto it = find(numbers.begin(),numbers.end(),val);
    if(it == numbers.end())
    cout << it - numbers.begin();
}
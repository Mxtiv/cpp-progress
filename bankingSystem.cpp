#include <iostream>
using namespace std;
class Account
{
private:
    float balance{};
    int pin{};

public:
    void depMoney(double amount){
        if(amount<100){
        this->balance+=amount;
        cout << "transaction suceed\n";
        }
        else{
            cout << "U need pin for this transaction\n" << "enter pin:\n";
            int inputPin{};
            cin >> inputPin;
            if(inputPin == pin){
                this->balance += amount;
                cout << "transaction suceed\n";
            }else{
                cout << "wrong pin\n";
            }
        }
    }
    Account(int pin)
    {
        this->pin = pin;
        this->balance = 0.0;
    }
    Account(int pin, float balance){
        this->pin = pin;
        this->balance = balance;
    }
    int getBalance(){
        return this->balance;
    }
};

int main()
{
    Account igorchpolak(1032, 20);
    cout << igorchpolak.getBalance();

}
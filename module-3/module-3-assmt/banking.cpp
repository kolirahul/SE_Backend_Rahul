#include<iostream>
using namespace std;

class ATM
{
    int pin;
    int balance;

public:

    // Constructor
    ATM()
    {
        pin = 12345;
        balance = 20000;
    }

    void login();
    void menu();
    void deposit();
    void withdraw();
    void checkbalance();
};

void ATM::login()
{
    int p;

    cout<<"Enter ATM PIN: ";
    cin>>p;

    if(p==pin)
    {
        menu();
    }
    else
    {
        cout<<"Wrong PIN. Access Denied";
    }
}

void ATM::menu()
{
    int choice;

    while(true)
    {
        cout<<"\n--- ATM MENU ---\n";
        cout<<"1. Deposit\n";
        cout<<"2. Withdraw\n";
        cout<<"3. Check Balance\n";
        cout<<"4. Exit\n";

        cout<<"Enter choice: ";
        cin>>choice;

        if(choice==1)
            deposit();

        else if(choice==2)
            withdraw();

        else if(choice==3)
            checkbalance();

        else if(choice==4)
        {
            cout<<"Thank You!";
            break;
        }

        else
            cout<<"Invalid Choice";
    }
}

void ATM::deposit()
{
    int amount;

    cout<<"Enter deposit amount: ";
    cin>>amount;

    balance = balance + amount;

    cout<<"New Balance = "<<balance;
}

void ATM::withdraw()
{
    int amount;

    cout<<"Enter withdraw amount: ";
    cin>>amount;

    if(amount>balance)
        cout<<"Insufficient Balance";
    else
    {
        balance = balance - amount;
        cout<<"Remaining Balance = "<<balance;
    }
}

void ATM::checkbalance()
{
    cout<<"Current Balance = "<<balance;
}

int main()
{
    ATM a;

    a.login();

    return 0;
}

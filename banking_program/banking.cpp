#include <iostream>
#include <ctime>
using std::cout;
using std::cin;

double balance;

void withdraw(double withdrawal)
{
    balance -= withdrawal;
    cout << "withdrew: " << withdrawal << "\n";
}

void deposit(double deposital)
{
    balance += deposital;
    cout << "deposit: " << deposital << "\n";
}

int main()
{
    
    int choice;
    
    int i = 0;
    while (i == 0)
    {   
        cout << "check balance-1||withdraw-2||deposit-3||close-4\nenter choice:";
        cin >> choice;
        switch (choice)
        {   
            case 1:
                cout << "your balance is: " << balance << "\n";
                i = 0;
                break;
            case 2:
                double withdraw_;
                cin >> withdraw_;
                withdraw(withdraw_);
                i = 0;
                break;
            case 3:
                double deposit_;
                cin >> deposit_;
                deposit(deposit_);
                i = 0;
                break;
            default:
                i = 1;
                cout << "quit";
                break;
        }

    }
    

    return 0;
}
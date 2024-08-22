#include <iostream>
using std::cout;
using std::cin;
using std::string;

string GetNumInput()
{
    string nums;
    do
    {
        cout << "enter card no.(no space): ";
        cin >> nums;
    } while (nums.find(" ") != string::npos);
    return nums;
}

bool CheckCard(const string cardno)
{
    int size = cardno.length();
    int sum;
    bool isSecond;

    for(int i = size - 1; i >= 0; i--)
    {
        int ch = cardno[i] - '0';
        cout << ch;
        
        if (isSecond)
        {
            ch *= 2;
        }

        sum += ch % 10;
        sum += ch / 10;

        isSecond = !isSecond;
    }
    
    if (sum % 10 == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    bool check = CheckCard(GetNumInput());

    if (check)
    {
        cout << "The card number is valid!";
    }
    else
    {
        cout << "The card number is not valid!";
    }

    return 0;
}
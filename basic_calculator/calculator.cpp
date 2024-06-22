#include <iostream>
using std::cin;
using std::cout;

int main(){
    
    double n1;
    double n2;
    char operand;
    double result;

    bool done = true;

    cout << "-------------calculator-------------" << '\n';

    cout << "enter operand (+,-,*,/)" << '\n';
    cin >> operand;

    cout << "enter number 1: ";
    cin >> n1;

    cout << "enter number 2: ";
    cin >> n2;

    switch (operand)
    {
        case '+':
            result = n1 + n2;
            break;
        case '-':
            result = n1 - n2;
            break;
        case '*':
            result = n1 * n2;
            break;
        case '/':
            result = n1 / n2;
            break;
        default:
            cout << "please enter (+,-,*,/) only." << '\n';
            done = false;
            break;
    }

    if (done == true){   
    
        cout << result << " is the result " << '\n';
    }
    
    cout << "------------------------------------";

}
#include <cmath>
#include <iostream>
using std::cout;
using std::cin;

int main(){
    double n1;
    double n2;
    double result;

    cout << "hypotenuse_calculator-----------------------";

    cout << "enter base: ";
    cin >> n1;

    cout << "enter height: ";
    cin >> n2;

    result = sqrt(pow(n1,2) + pow(n2,2));
    cout << "the result is: " << result;

    cout << "_____________________-----------------------";

    return 0;
}
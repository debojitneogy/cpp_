#include <iostream>
#include <string>
using std::string;
using std::cout;
using std::cin;
using std::getline;

string reverse(string ini) {
    string fin;
    while (ini.length() > 0) {
        int a = ini.length() - 1;
        fin += ini.substr(a, 1);
        ini = ini.substr(0, a);
    }
    return fin;
}

int main() {
    string ini;
    cout << "enteer a value to check palindrome: ";
    getline(cin, ini);
    if (ini == reverse(ini)) {
        cout << "is palindrome";
    }
    else {
        cout << "not palindrome";
    }
}
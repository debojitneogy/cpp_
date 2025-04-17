#include <iostream>
#include <fstream>
using std::cout;
using std::cin;
using std::ofstream;

int main(){

    ofstream myfile("./a.txt");
    myfile << "myfile";
    return 0;
}
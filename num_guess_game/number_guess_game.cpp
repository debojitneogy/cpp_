#include <iostream>
#include <ctime>
using std::cout;
using std::cin;


int main()
{
    cout << "num_guess_game------------------------\n";

    srand(time(NULL));
    int R_num = (rand() % 100) + 1;

    int ans;

    bool right;

    cout << "Guess the number that is between 1-100, only 10 tries" << '\n';

    for(int i = 0;i < 10;i++)
    {
        cout << "guess no." << (i+1) << ": ";
        cin >> ans;
        
        if(R_num > ans)
        {
            cout << "too little" << '\n';
        }
        else if(R_num < ans)
        {
            cout << "too high" << '\n';
        }
        else if(R_num = ans)
        {
            cout << "Right, you won!" << '\n';
            right = true;
            break;
        }
        
    }

    if(right != true)
    {
        cout << "Game over, the number was "<< R_num << '\n';
    }
    

    cout << "--------------------------------------";

    return 0;
}
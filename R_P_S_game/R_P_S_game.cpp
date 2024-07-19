#include <iostream>
#include <ctime>
using std::cout;
using std::cin;
using std::string;

char get_compchoice()
{
    srand(time(NULL));
    int c_choice = (rand() % 3) + 1;
    char r_choice;
    
    switch (c_choice)
    {
    case 1:
        r_choice = 'r';
        break;
    case 2:
        r_choice = 'p';
        break;
    case 3:
        r_choice = 's';
        break;
    default:
        break;
    }

    return r_choice;
}

char get_playerchoice()
{
    char choice;

    do
    {
        cout << "enter choice\n 'r' for Rock\n 'p' for Paper\n 's' for Scissors\n: ";
        cin >> choice;
    } while(choice != 'r' & choice != 'p' & choice != 's');
    
    return choice;
}

int check_winner(char player, char comp)
{
    //0-loose||1-win||2-draw

    switch (comp)
    {
    case 'r':

        switch (player)
        {
        case 'r':
            return 2;
            break;
        case 'p':
            return 1;
            break;
        case 's':
            return 0;
            break;
        }

        break;
    case 'p':
        
        switch (player)
        {
        case 'r':
            return 0;
            break;
        case 'p':
            return 2;
            break;
        case 's':
            return 1;
            break;
        }

        break;
    case 's':
        
        switch (player)
        {
        case 'r':
            return 1;
            break;
        case 'p':
            return 0;
            break;
        case 's':
            return 2;
            break;
        }

        break;
    }
}

string get_word_char(char letter_)
{
    switch (letter_)
    {
    case 'r':
        return "Rock";
        break;

    case 'p':
        return "Paper";
        break;

    case 's':
        return "Scissors";
        break;

    }
}

string get_word_int(int num)
{
    switch (num)
    {
    case 0:
        return "Lost";
        break;
    
    case 1:
        return "Won";
        break;

    case 2:
        return "drew";
        break;
    }
}

int main()
{
    cout << "----Rock-Paper-Scissors----" << '\n';
    cout << "--10-Rounds--\n";

    int score;

    for (int i = 0; i < 10; i++)
    {
        cout << "Round " << (i+1) << "\n";
        char player = get_playerchoice();
        char comp = get_compchoice();
        cout << "Computer choice:"<< get_word_char(comp) << "\n";
        int win = check_winner(player,comp);
        switch (win)
        {
        case 1:
            score++;
            break;
        }
        cout << "Player " << get_word_int(win) << " against Computer\n";
    }
    
    cout << "--Player score: " << score << "--\n";

    cout << "---------------------------";

    return 0;
}
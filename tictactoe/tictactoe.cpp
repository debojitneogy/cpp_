#include <iostream>
#include <time.h>
using std::cout;
using std::cin;

char spaces[] = {' ',' ',' ',' ',' ',' ',' ',' ',' '};

bool isdraw()
{
    for (int i = 0; i < 9; i++)
    {
        if (spaces[i] == ' ')
        {
            return false;
        }
    }
    return true;
}

void DisplayGrid(char *spaces)
{
    //cout << "   |   |   \n";
    cout << " " << spaces[0] << " | " << spaces[1] << " | " << spaces[2] << " \n";
    //cout << "   |   |   \n";

    cout << "-----------\n";

    //cout << "   |   |   \n";
    cout << " " << spaces[3] << " | " << spaces[4] << " | " << spaces[5] << " \n";
    //cout << "   |   |   \n";

    cout << "-----------\n";

    //cout << "   |   |   \n";
    cout << " " << spaces[6] << " | " << spaces[7] << " | " << spaces[8] << " \n";
    //cout << "   |   |   \n";

    cout << "_______________________\n\n";
}

void PlayerMove(char *spaces)
{
    int move_pos;
    do
    {
        move_pos = 0;
        cout << "Place move O from (1-9):";
        cin >> move_pos;
        move_pos = (int)move_pos - 1;
    } while (spaces[move_pos] != ' ');
    spaces[move_pos] = 'O';
}

void CompMove(char *spaces)
{
    while (true)
    {
        srand(time(0));
        int ran = rand() % 9;
        if (spaces[ran] == ' ')
        {
            spaces[ran] = 'X';
            break;
        }
        else
        {
            if (isdraw())
            {
                break;
            }
            continue;
        }
    }
}

int WinCheck(char *spaces)
{
    //0-no win| 1-player win| 2-comp win
    if (spaces[0] == spaces[1] && spaces[1] == spaces[2] && spaces[0] != ' ')
    {
        switch (spaces[0])
        {
        case 'O':
            return 1;
            break;
        case 'X':
            return 2;
            break;
        }
    }
    else if (spaces[3] == spaces[4] && spaces[4] == spaces[5] && spaces[3] != ' ')
    {
        switch (spaces[3])
        {
        case 'O':
            return 1;
            break;
        case 'X':
            return 2;
            break;
        }
    }
    else if (spaces[6] == spaces[7] && spaces[7] == spaces[8] && spaces[6] != ' ')
    {
        switch (spaces[6])
        {
        case 'O':
            return 1;
            break;
        case 'X':
            return 2;
            break;
        }
    }
    else if (spaces[0] == spaces[3] && spaces[3] == spaces[5] && spaces[0] != ' ')
    {
        switch (spaces[0])
        {
        case 'O':
            return 1;
            break;
        case 'X':
            return 2;
            break;
        }
    }
    else if (spaces[1] == spaces[4] && spaces[4] == spaces[7] && spaces[1] != ' ')
    {
        switch (spaces[1])
        {
        case 'O':
            return 1;
            break;
        case 'X':
            return 2;
            break;
        }
    }
    else if (spaces[2] == spaces[5] && spaces[5] == spaces[8] && spaces[2] != ' ')
    {
        switch (spaces[2])
        {
        case 'O':
            return 1;
            break;
        case 'X':
            return 2;
            break;
        }
    }
    else if (spaces[0] == spaces[4] && spaces[4] == spaces[8] && spaces[0] != ' ')
    {
        switch (spaces[0])
        {
        case 'O':
            return 1;
            break;
        case 'X':
            return 2;
            break;
        }
    }
    else if (spaces[2] == spaces[4] && spaces[4] == spaces[6] && spaces[2] != ' ')
    {
        switch (spaces[2])
        {
        case 'O':
            return 1;
            break;
        case 'X':
            return 2;
            break;
        }
    }
    return 0;
}


int main()
{
    
    while (true)
    {
        PlayerMove(spaces);
        DisplayGrid(spaces);
        CompMove(spaces);
        DisplayGrid(spaces);
        if (isdraw())
        {
            cout << "Draw!";
            break;
        }
        else if (WinCheck(spaces) == 1)
        {
            cout << "Player wins!";
            break;
        }
        else if (WinCheck(spaces) == 2)
        {
            cout << "Computer wins!";
            break;
        }
        
    }
    return 0;
}
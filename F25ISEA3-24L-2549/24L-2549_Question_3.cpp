#include <iostream>
#include <conio.h>
using namespace std;

char board[3][3] = { {'1','2','3'}, {'4','5','6'}, {'7','8','9'} };

void displayBoard()
{
    cout << endl;
    for (int i = 0; i < 3; i++)
    {
        cout << " ";
        for (int j = 0; j < 3; j++)
        {
            cout << board[i][j];
            if (j < 2)
            {
                cout << " | ";
            }
        }
        cout << endl;
        if (i < 2)
        {
            cout << "---+---+---" << endl;
        }
    }
    cout << endl;
}

bool checkWin()
{
    for (int i = 0; i < 3; i++)
    {
        if (board[i][0] == board[i][1] && board[i][1] == board[i][2])
        {
            return true;
        }
        if (board[0][i] == board[1][i] && board[1][i] == board[2][i])
        {
            return true;
        }
    }
    if (board[0][0] == board[1][1] && board[1][1] == board[2][2])
    {
        return true;
    }
    if (board[0][2] == board[1][1] && board[1][1] == board[2][0])
    {
        return true;
    }
    return false;
}

bool checkDraw()
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (board[i][j] != 'X' && board[i][j] != 'O')
            {
                return false;
            }
        }
    }
    return true;
}

int main()
{
    cout << "=== Tic Tac Toe Game Booo ===" << endl << endl;

    char player = 'X';
    int move;
    bool gameOver = false;

    displayBoard();

    while (!gameOver)
    {
        cout << "Player " << player << ", enter a position (1-9): ";
        cin >> move;

        if (move < 1 || move > 9)
        {
            cout << "Invalid move! Try again." << endl;
            continue;
        }

        int row = (move - 1) / 3;
        int col = (move - 1) % 3;

        if (board[row][col] == 'X' || board[row][col] == 'O')
        {
            cout << "Position already taken! Try again." << endl;
            continue;
        }

        board[row][col] = player;
        displayBoard();

        if (checkWin())
        {
            cout << "Player " << player << " wins!" << endl;
            gameOver = true;
        }
        else if (checkDraw())
        {
            cout << "Game drawn!" << endl;
            gameOver = true;
        }
        else
        {
            if (player == 'X')
            {
                player = 'O';
            }
            else
            {
                player = 'X';
            }
        }
    }

    cout << "Press any key to finish..." << endl;
    _getch();

    cout << "Game finisheddd..." << endl;
    return 0;
}

#include <iostream>
#include <cstdlib>

int main() {
    char board[3][3] = {
        {' ', ' ', ' '},
        {' ', ' ', ' '},
        {' ', ' ', ' '}
    };

    
    char playerX = 'X';
    char playerO = 'O';
    char currentplayer = playerX;
    char winner = ' ';

    int r = -1;
    int c = -1;

    for (int i = 0; i < 9; i++) {
        std::system("clear");

        // Printing the Game's Board.
        std::cout << "     |     |     " << std::endl;
        std::cout << "  " << board[0][0] << "  |  " << board[0][1] << "  |  " << board[0][2] << std::endl;
        std::cout << "_____|_____|_____" << std::endl;
        std::cout << "     |     |     " << std::endl;
        std::cout << "  " << board[1][0] << "  |  " << board[1][1] << "  |  " << board[1][2] << std::endl;
        std::cout << "_____|_____|_____" << std::endl;
        std::cout << "     |     |     " << std::endl;
        std::cout << "  " << board[2][0] << "  |  " << board[2][1] << "  |  " << board[2][2] << std::endl;
        std::cout << "     |     |     " << std::endl;

        if (winner != ' ') {
            break;
        }

        std::cout << "Current Player is: " << currentplayer << "\n";
        while (true) {
            std::cout << "Enter r c from 0-2 for Row and Column: ";
            std::cin >> r >> c;

            if (r < 0 || r > 2 || c < 0 || c > 2) {
                std::cout << "Invalid Input, Please Try Again\n"; 
            }
            else if (board[r][c] != ' ') {
                std::cout << "Tile is Full, Try again\n";
            }
            else {
                break;
            }
            // reseting the values
            r = -1;
            c = -1;
            std::cin.clear(); // clear error flags
            std::cin.ignore(10000, '\n'); // discard values
            //(skips to the next new line \n up to 10000 char) already in input  stream
        }

        board[r][c] = currentplayer;
        currentplayer = (currentplayer == playerX) ? playerO : playerX;

        // Check Winner
        // Check Rows
        for (int r = 0; r < 3; r++) {
            if (board[r][0] != ' ' && board[r][0] == board[r][1] && board[r][1] == board[r][2]) {
                winner = board[r][0];
                break;
            }
        }

        // Check Columns
        for (int c = 0; c < 3; c++) {
            if (board[0][c] != ' ' && board[0][c] == board[1][c] && board[1][c] == board[2][c]) {
                winner = board[0][c];
                break;
            }
        }

        // Check Diagnols
        if (board[0][0] != ' ' && board[0][0] == board[1][1] && board[1][1] == board[2][2]) {
            winner = board[0][0];
        }
        else if (board[0][2] != ' ' && board[0][2] == board[1][1] && board[1][1] == board[2][0]) {
            winner = board[0][2];
        }
    }

    // Printing the Game's Board one last time so that the Player can see the winning move.
    std::system("clear");
    std::cout << "     |     |     " << std::endl;
    std::cout << "  " << board[0][0] << "  |  " << board[0][1] << "  |  " << board[0][2] << std::endl;
    std::cout << "_____|_____|_____" << std::endl;
    std::cout << "     |     |     " << std::endl;
    std::cout << "  " << board[1][0] << "  |  " << board[1][1] << "  |  " << board[1][2] << std::endl;
    std::cout << "_____|_____|_____" << std::endl;
    std::cout << "     |     |     " << std::endl;
    std::cout << "  " << board[2][0] << "  |  " << board[2][1] << "  |  " << board[2][2] << std::endl;
    std::cout << "     |     |     " << std::endl;

    if (winner != ' ') {
        std::cout << "Player " << winner << " is the Winner.\n";
    }
    else {
        std::cout << "Tie!\n";
    }
}
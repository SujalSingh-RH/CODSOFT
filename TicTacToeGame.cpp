#include <iostream>
#include <string>
using namespace std;

void printBoard(char board[3][3]) {
    cout << "   |   |   " << endl;
    cout << " " << board[0][0] << " | " << board[0][1] << " | " << board[0][2] << endl;
    cout << "___|___|___" << endl;
    cout << "   |   |   " << endl;
    cout << " " << board[1][0] << " | " << board[1][1] << " | " << board[1][2] << endl;
    cout << "___|___|___" << endl;
    cout << "   |   |   " << endl;
    cout << " " << board[2][0] << " | " << board[2][1] << " | " << board[2][2] << endl;
    cout << "   |   |   " << endl;
}

bool checkWin(char board[3][3], char player) {
    // Check rows, columns and diagonals
    for (int i = 0; i < 3; ++i) {
        if ((board[i][0] == player && board[i][1] == player && board[i][2] == player) ||
            (board[0][i] == player && board[1][i] == player && board[2][i] == player)) {
            return true;
        }
    }
    if ((board[0][0] == player && board[1][1] == player && board[2][2] == player) ||
        (board[0][2] == player && board[1][1] == player && board[2][0] == player)) {
        return true;
    }
    return false;
}

bool isDraw(char board[3][3]) {
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            if (board[i][j] == ' ') {
                return false;
            }
        }
    }
    return true;
}

int main() {
    char board[3][3] = {
        {' ', ' ', ' '},
        {' ', ' ', ' '},
        {' ', ' ', ' '}
    };
  
    const char playerX = 'X';
    const char playerO = 'O';
    char currentPlayer = playerX;
    int r, c;
    
    for (int i = 0; i < 9; ++i) {
        printBoard(board);
        cout << "Current Player: " << currentPlayer << endl;

        while (true) {
            cout << "Enter row and column (0-2): ";
            cin >> r >> c;

            if (r < 0 || r > 2 || c < 0 || c > 2) {
                cout << "Invalid input, try again." << endl;
            } else if (board[r][c] != ' ') {
                cout << "Tile is full, try again." << endl;
            } else {
                break;
            }
            cin.clear(); // Clear error flags
            cin.ignore(10000, '\n'); // Discard input
        }

        board[r][c] = currentPlayer;

        if (checkWin(board, currentPlayer)) {
            printBoard(board);
            cout << "Player " << currentPlayer << " wins!" << endl;
            return 0; // Exit after win
        }

        if (isDraw(board)) {
            printBoard(board);
            cout << "It's a draw!" << endl;
            return 0; // Exit after draw
        }

        currentPlayer = (currentPlayer == playerX) ? playerO : playerX;
    }

    printBoard(board);
    cout << "Game Over!" << endl;

    return 0;
}

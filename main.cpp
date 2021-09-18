#include <iostream>


char board[8][8] = {{'-','-','-','-','-','-','-','-'},
                    {'-','-','-','-','-','-','-','-'},
                    {'-','-','-','-','-','-','-','-'},
                    {'-','-','-','-','-','-','-','-'},
                    {'-','-','-','-','-','-','-','-'},
                    {'-','-','-','-','-','-','-','-'},
                    {'-','-','-','-','-','-','-','-'},
                    {'-','-','-','-','-','-','-','-'}};

void populateBoard();
void printBoard();

int main() {
    populateBoard();

    printBoard();

    return 0;
}

void printBoard() {
    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 8; j++) {
            std::cout << board[i][j];
        }
        std::cout << std::endl;
    }
}


void populateBoard() {
    for (int i = 0; i < 2; i++) {
        if (i == 0) {
            for (int j = 0; j < 8; j++) {
                switch (j) {
                    case 0:
                        board[i][j] = 'R';
                        board[7-i][j] = 'R';
                        board[i][7-j] = 'R';
                        board[7-i][7-j] = 'R';
                        break;
                    case 1:
                        board[i][j] = 'N';
                        board[7-i][j] = 'N';
                        board[i][7-j] = 'N';
                        board[7-i][7-j] = 'N';
                        break;
                    case 2:
                        board[i][j] = 'B';
                        board[7-i][j] = 'B';
                        board[i][7-j] = 'B';
                        board[7-i][7-j] = 'B';
                        break;
                    case 3:
                        board[i][j] = 'Q';
                        board[7-i][j] = 'Q';
                        board[i][7-j] = 'K';
                        board[7-i][7-j] = 'K';
                        break;
                }
            }
        }
        else {

            for (int j = 0; j < 8; j++) {
                board[i][j] = 'p';
                board[7-i][j] = 'p';
            }
        }
    }
}

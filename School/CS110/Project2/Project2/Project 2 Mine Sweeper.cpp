/*******************************************

Program:Project 2 Mine sweeper

Purpose: Create a mine sweeper game

Author: Michael Boutin

Date:12/1/2023

********************************************/


#include <iostream>
#include <ctime>

using namespace std;

const int MAX = 6;
const int NUMBOMBS = 6;

void initializeShowBoard(char showBoard[MAX][MAX]) {
    for (int i = 0; i < MAX; i++) {
        for (int j = 0; j < MAX; j++) {
            showBoard[i][j] = '_';
            cout << showBoard[i][j] << ' ';
        }
        cout << endl;
    }
}

void placeBombs(int hideBoard[MAX][MAX]) {
    for (int bombs = 0; bombs < NUMBOMBS;) {
        int x = rand() % MAX;
        int y = rand() % MAX;

        if (hideBoard[x][y] != 9) {
            hideBoard[x][y] = 9;
            bombs++;

            
            for (int dx = -1; dx <= 1; dx++) {
                for (int dy = -1; dy <= 1; dy++) {
                    int nx = x + dx;
                    int ny = y + dy;
                    if (nx >= 0 && nx < MAX && ny >= 0 && ny < MAX && hideBoard[nx][ny] != 9) {
                        hideBoard[nx][ny]++;
                    }
                }
            }
        }
    }
}

void revealCell(char showBoard[MAX][MAX], int hideBoard[MAX][MAX], int x, int y) {
    if (showBoard[x][y] != '_') {
        cout << "Cell already revealed.\n";
        return;
    }

    if (hideBoard[x][y] == 9) {
        cout << "Game Over! You hit a bomb.\n";
        exit(0);  
    }
    else {
        showBoard[x][y] = hideBoard[x][y] + '0';
    }
}

void displayBoard(char board[MAX][MAX]) {
    for (int i = 0; i < MAX; i++) {
        for (int j = 0; j < MAX; j++) {
            cout << board[i][j] << ' ';
        }
        cout << endl;
    }
}

int main() {
    char showBoard[MAX][MAX];
    int hideBoard[MAX][MAX];

    srand(time(NULL));

    for (int i = 0; i < MAX; i++) {
        for (int j = 0; j < MAX; j++) {
            showBoard[i][j] = '_';
            cout << showBoard[i][j];
        }
        cout << endl;
    }

    for (int i = 0; i < MAX; i++) {
        for (int j = 0; j < MAX; j++) {
            hideBoard[i][j] = 0;
        }
    }

    for (int bombs = 0; bombs < NUMBOMBS;) {
        int x = rand() % MAX;
        int y = rand() % MAX;

        if (hideBoard[x][y] != 9) {
            hideBoard[x][y] = 9;
            bombs++;

          
            for (int dx = -1; dx <= 1; dx++) {
                for (int dy = -1; dy <= 1; dy++) {
                    int nx = x + dx;
                    int ny = y + dy;
                    if (nx >= 0 && nx < MAX && ny >= 0 && ny < MAX && hideBoard[nx][ny] != 9) {
                        hideBoard[nx][ny]++;
                    }
                }
            }
        }
    }

    int moves = 0;
    while (true) {
        int x, y;
        cout << "Enter the coordinates to reveal a cell (row and column): ";
        cin >> x >> y;

        if (x < 0 || x >= MAX || y < 0 || y >= MAX) {
            cout << "Invalid position. Please enter valid coordinates.\n";
            continue;
        }

        revealCell(showBoard, hideBoard, x, y);
        displayBoard(showBoard);

        moves++;

        
        if (moves == MAX * MAX - NUMBOMBS) {
            cout << "Congratulations! You've won!\n";
            break;
        }
    }

    return 0;
}

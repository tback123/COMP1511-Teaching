#include <stdio.h>

#define SIZE 5

int did_player_win(char player, char board[SIZE][SIZE]) {
    
    // Checking for horizontal wins
    for (int row = 0; row < SIZE; row++) {
        int num_player = 0;
        for (int col = 0; col < SIZE; col++) {
            if (board[row][col] == player) {
                num_player++;
            }
            if (num_player == SIZE) {
                // 1 means this player did win
                return 1;
            }
        }

    }

    // Checking for vertical wins
    for (int col = 0; col < SIZE; col++) {
        int num_player = 0;
        for (int row = 0; row < SIZE; row++) {
            if (board[row][col] == player) {
                num_player++;
            }
            if (num_player == SIZE) {
                // 1 means this player did win
                return 1;
            }
        }
    }

    // check diagionals
    int row = 0;
    int col = 0;
    int num_player_1 = 0;
    int num_player_2 = 0;
    while (row < SIZE && col < SIZE) {

        if (board[row][col] == player) {
            num_player_1++;
        }

        if (board[row][SIZE-1-col] == player) {
            num_player_2++;
        }

        row++;
        col++;
    }

    if (num_player_1 == SIZE || num_player_2 == SIZE) {
        return 1;
    }
    

    return 0;


}

int main(void) {

    char o_wins_board[SIZE][SIZE] = {
        {'O', 'X', ' ', ' ', 'O'},
        {' ', 'X', ' ', 'O', ' '},
        {' ', 'X', 'O', ' ', ' '},
        {'O', 'O', 'O', 'O', 'X'},
        {'O', 'X', ' ', ' ', 'O'},
    };

    char no_wins_board[SIZE][SIZE] = {
        {'O', 'X', ' ', ' ', 'X'},
        {' ', 'X', ' ', ' ', ' '},
        {' ', 'X', 'O', ' ', ' '},
        {'O', 'X', 'O', 'O', 'O'},
        {'X', ' ', ' ', ' ', 'O'},
    };

    char x_wins_board[SIZE][SIZE] = {
        {'O', 'X', ' ', ' ', 'X'},
        {' ', 'X', ' ', ' ', ' '},
        {' ', 'X', 'O', ' ', ' '},
        {'O', 'X', 'O', 'O', 'O'},
        {' ', 'X', ' ', ' ', 'O'},
    };
    

    if (did_player_win('X', o_wins_board)) {
        printf("X Won This Board!\n");
    } else if (did_player_win('O', o_wins_board)) {
        printf("O Won This Board!\n");
    } else {
        printf("Nobody has won this board!\n");
    }
    
}
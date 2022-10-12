#include <stdio.h>

#define SIZE 5

// Return 1 if player won
// Return 0 otherwise
int did_player_win(char player, char board[SIZE][SIZE]) {
    
    // Look for horizontal wins
    for (int row = 0; row < SIZE; row++) {

        // count the number of players in each row
        int counter = 0;
        for (int col = 0; col < SIZE; col++) {
            if (board[row][col] == player) {
                counter++;
            }
        }

        // check number of players in this row
        if (counter == SIZE) {
            // Player won!
            return 1;
        }
    }

    // Look for vertical wins
    for (int col = 0; col < SIZE; col++) {

        // count the number of players in each col
        int counter = 0;
        for (int row = 0; row < SIZE; row++) {
            if (board[row][col] == player) {
                counter++;
            }
        }

        // check number of players in this row
        if (counter == SIZE) {
            // Player won!
            return 1;
        }
    }

    // Look for diag wins
    int left_diag = 0;
    int right_diag = 0;

    for (int index = 0; index < SIZE; index++) {

        if (board[index][index] == player) {
            left_diag++;
        }

        if (board[SIZE-1-index][index] == player) {
            right_diag++;
        }
    }

    if (left_diag == SIZE) {
        return 1;
    } else if (right_diag == SIZE) {
        return 1;
    }

    return 0;

}

int main(void) {
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
    char o_wins_board[SIZE][SIZE] = {
        {'O', 'X', ' ', ' ', 'X'},
        {' ', 'X', ' ', ' ', ' '},
        {' ', 'X', 'O', ' ', ' '},
        {'O', 'O', 'O', 'O', 'O'},
        {'X', 'X', ' ', ' ', 'O'},
    };

    char x2_wins_board[SIZE][SIZE] = {
        {'O', 'X', ' ', ' ', 'X'},
        {' ', ' ', ' ', 'X', ' '},
        {' ', 'X', 'X', ' ', ' '},
        {'O', 'X', 'O', 'O', 'O'},
        {'X', ' ', ' ', ' ', 'O'},
    };

    if (did_player_win('X', x2_wins_board)) {
        printf("X Won This Board!\n");

    } else if (did_player_win('O', x2_wins_board)) {
        printf("O Won This Board!\n");

    } else {

        printf("Nobody has won this board!\n");
    }
}
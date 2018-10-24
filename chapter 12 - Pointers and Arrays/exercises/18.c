/***************************************************************************
Write the following function, which evaluates a chess position:
int evaluate_position(char board[8][8]);

board represents a configuration of pieces on a chessboard, where the 
letters K, Q, R, B, N, P represent White pieces, and the letters 
k, q, r, b, n, and p represent Black pieces. evaluate_position should 
sum the values of the White pieces (Q = 9, R = 5, B = 3, N = 3, P = 1). 
It should also sum the values of the Black pieces (done in a similar way).
The function will return the difference between the to numbers. 
This value will be positive if White has an advantage in material and 
negative if Black has an advantage.
***************************************************************************/

#include <stdio.h>

#define LEN 8

int evaluate_position(char *board, int n);

int main(void)
{
    char chess_board[LEN][LEN] = {{'R', 'N', 'B', 'Q', 'K', 'B', 'N', 'R'},
                            {'P', 'P', 'P', 'P', 'P', 'P', 'P', 'P'},
                            {'.', '.', '.', '.', '.', '.', '.', '.'},
                            {'.', '.', '.', '.', '.', '.', '.', '.'},
                            {'.', '.', '.', '.', '.', '.', '.', '.'},
                            {'.', '.', '.', '.', '.', '.', '.', '.'},
                            {'p', 'p', 'p', 'p', 'p', 'p', 'p', 'p'},
                            {'r', 'n', 'b', 'q', 'k', 'b', 'n', 'r'}};

    printf("Evaluate chess positions: %d", evaluate_position(chess_board[0], LEN * LEN));
    return 0;
}


int evaluate_position(char *board, int n) 
{
    int white_score = 0, black_score = 0;
    char *p;

    for(p = board; p < board + n; p++) {
        switch(*p) {
            case 'Q':   white_score += 9; /*White Queen*/
            break;
            case 'R':   white_score += 5; /*White Rook*/
            break;
            case 'B':   
            case 'N':   white_score += 3; /*White Bishop / Knight*/
            break;
            case 'P':   white_score += 1; /*White Pawn*/
            break;
            case 'q':   black_score += 9; /*Black Queen*/
            break;
            case 'r':   black_score += 5; /*Black Rook*/
            break;
            case 'b':   
            case 'n':   black_score += 3; /*Black Bishop / Knight*/
            break;
            case 'p':   black_score += 1; /*Black Pawn*/
            break;
        }
    }
    return black_score - white_score;
}

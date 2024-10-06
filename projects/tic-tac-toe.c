#include <stdio.h>

// Function declarations
void printDeck(int deck[3][3]);
int winner(int deck[3][3], int player);
int hasZero(int deck[3][3]);
int isRowSame(int deck[3][3]);
int isColSame(int deck[3][3]);
int isDiagonalSame(int deck[3][3]);

int main() {
    int deck[3][3] = {{0, 0, 0}, {0, 0, 0}, {0, 0, 0}};
    int currentPlayer = 1;
    int row, col;
    int position;

    do {
        printDeck(deck);
        printf("Player %d turn (enter row and column as 11 to 33):\n", currentPlayer);
        scanf("%d", &position);
        
        row = position / 10 - 1;  // Adjust for zero-based indexing
        col = position % 10 - 1;  // Adjust for zero-based indexing

        // Validate move
        if (position < 11 || position > 33 || deck[row][col] != 0) {
            printf("Invalid move. Please try again.\n");
            continue;  // Skip to next iteration of the loop
        }

        deck[row][col] = currentPlayer;  // Place the move
        if (winner(deck, currentPlayer) != 0) {
            printDeck(deck);
            printf("Player %d wins!\n", currentPlayer);
            break;  // Exit if there's a winner
        }

        currentPlayer = (currentPlayer == 1) ? 2 : 1;  // Switch player

    } while (hasZero(deck) == 1);
    
    if (hasZero(deck) == 0) {
        printDeck(deck);
        printf("It's a draw!\n");
    }
}

int hasZero(int deck[3][3]) {
    for (size_t row = 0; row < 3; row++) {
        for (size_t col = 0; col < 3; col++) {
            if (deck[row][col] == 0) {
                return 1;
            }
        }
    }
    return 0;
}

void printDeck(int deck[3][3]) {
    for (size_t row = 0; row < 3; row++) {
        for (size_t col = 0; col < 3; col++) {
            printf("%d\t", deck[row][col]);
        }
        printf("\n");
    }
}

int winner(int deck[3][3], int player) {
    if (isDiagonalSame(deck) || isColSame(deck) || isRowSame(deck)) {
        return player;  // Return player number if there's a winner
    }
    return 0;  // Return 0 if no winner
}

int isDiagonalSame(int deck[3][3]) {
    return ((deck[0][0] == deck[1][1] && deck[1][1] == deck[2][2] && deck[0][0] != 0) ||
            (deck[2][0] == deck[1][1] && deck[1][1] == deck[0][2] && deck[2][0] != 0));
}

int isColSame(int deck[3][3]) {
    for (size_t col = 0; col < 3; col++) {
        if (deck[0][col] != 0) {
            int isSame = 1;
            for (size_t row = 1; row < 3; row++) {
                if (deck[row][col] != deck[0][col]) {
                    isSame = 0;
                    break; // Exit the loop early
                }
            }
            if (isSame) {
                return 1; // Return 1 to indicate a winner
            }
        }
    }
    return 0; // Return 0 if no winner found in any column
}

int isRowSame(int deck[3][3]) {
    for (size_t row = 0; row < 3; row++) {
        if (deck[row][0] != 0) {
            int isSame = 1;  // Assume the row is the same initially
            for (size_t col = 1; col < 3; col++) {
                if (deck[row][col] != deck[row][0]) {
                    isSame = 0;  // If any element differs, set to 0
                    break;  // Exit the loop early
                }
            }
            if (isSame) {
                return 1; // Return 1 if all elements are the same
            }
        }
    }
    return 0; // Return 0 if no winner found in any row
}

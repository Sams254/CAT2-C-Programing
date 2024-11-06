#include <stdio.h>

int main() {
    // Declare and initialize the 2D array
    int scores[2][2] = {
        {10, 20},  // Example values for row 1
        {30, 40}   // Example values for row 2
    };

    // Print the elements of the array using a nested for loop
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            printf("scores[%d][%d] = %d\n", i, j, scores[i][j]);
        }
    }

    return 0;
}

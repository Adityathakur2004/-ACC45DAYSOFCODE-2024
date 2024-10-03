#include <stdio.h>

int main() {
    int T; // Number of test cases
    scanf("%d", &T);

    while (T--) {
        int X, Y; // Time to solve problems A and B
        scanf("%d %d", &X, &Y);

        // Calculate the score for the two possible orders:
        // 1. A first, then B
        int score_A_first = (500 - 2 * X) + (1000 - 4 * (X + Y));

        // 2. B first, then A
        int score_B_first = (1000 - 4 * Y) + (500 - 2 * (X + Y));

        // Determine the maximum score
        int max_score = (score_A_first > score_B_first) ? score_A_first : score_B_first;

        // Output the result for this test case
        printf("%d\n", max_score);
    }

    return 0;
}



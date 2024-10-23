#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T); // Read number of test cases

    while (T--) {
        int H, X, Y;
        scanf("%d %d %d", &H, &X, &Y); // Read H, X, Y for each test case

        // Case 1: Only regular attacks
        int regular_attacks = (H + X - 1) / X; // Ceiling of H / X

        // Case 2: Use the special attack once
        int remaining_health = H - Y;
        int additional_attacks = 0;

        if (remaining_health > 0) {
            additional_attacks = (remaining_health + X - 1) / X; // Ceiling of remaining_health / X
        }

        int total_attacks_with_special = 1 + additional_attacks; // 1 for the special attack

        // Determine the minimum number of attacks needed
        int result = (regular_attacks < total_attacks_with_special) ? regular_attacks : total_attacks_with_special;

        // Output the result
        printf("%d\n", result);
    }

    return 0;
}

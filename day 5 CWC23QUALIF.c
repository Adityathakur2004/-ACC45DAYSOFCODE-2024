#include <stdio.h>

int main() {
	 int T; // Number of test cases
    scanf("%d", &T); // Read the number of test cases

    while (T--) {
        int B1, B2, B3; // Variables for the states of the bottles
        scanf("%d %d %d", &B1, &B2, &B3); // Read the states of the bottles

        // Count the number of empty bottles
        int empty_count = (B1 == 0) + (B2 == 0) + (B3 == 0);

        // Check the condition for filling bottles
        if (empty_count >= 2) {
            printf("Water filling time\n");
        } else {
            printf("Not now\n");
        }
    }

return 0;
}


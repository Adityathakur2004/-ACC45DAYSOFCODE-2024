#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T); // Read the number of test cases

    for (int i = 0; i < T; i++) {
        long long X, Y;
        scanf("%lld %lld", &X, &Y); // Read X and Y

        if (Y <= X) {
            printf("0\n"); // If purchasing cost is less than or equal to renting for one month
        } else {
            long long maxMonths = (Y - 1) / X; // Calculate maximum months
            printf("%lld\n", maxMonths);
        }
    }

    return 0;
}



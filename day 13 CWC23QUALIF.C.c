#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);  // Read the number of test cases

    while (T--) {
        long long X, Y;  // Use long long to handle the maximum constraints
        scanf("%lld %lld", &X, &Y);  // Read X and Y

        // Check if Munchy is an expert
        if (2 * Y >= X) {
            printf("YES\n");  // Munchy is an expert
        } else {
            printf("NO\n");   // Munchy is not an expert
        }
    }
    return 0;
}


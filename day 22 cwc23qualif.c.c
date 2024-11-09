#include <stdio.h>

int main() {
    int T;  // Number of test cases
    scanf("%d", &T);

    while (T--) {
        int N;  // Number of terms in the polynomial
        scanf("%d", &N);

        int coefficients[N];  // Array to hold coefficients
        for (int i = 0; i < N; i++) {
            scanf("%d", &coefficients[i]);
        }

        // Find the degree of the polynomial
        int degree = -1;
        for (int i = N - 1; i >= 0; i--) {
            if (coefficients[i] != 0) {
                degree = i;
                break;
            }
        }

        // Output the degree for this test case
        printf("%d\n", degree);
    }

    return 0;
}

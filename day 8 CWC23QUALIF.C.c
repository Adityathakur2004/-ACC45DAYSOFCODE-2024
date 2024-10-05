#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T); // Read the number of test cases

    while (T--) {
        int P, Q, R, S;
        scanf("%d %d %d %d", &P, &Q, &R, &S); // Read the profits for each company

        // Calculate the total profit of all companies
        int total = P + Q + R + S;

        // Check if any company has profit greater than the sum of the other three
        if (P > (total - P) || Q > (total - Q) || R > (total - R) || S > (total - S)) {
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    }

    return 0;
}



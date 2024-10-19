#include <stdio.h>

int main() {
    int T; // Number of test cases
    scanf("%d", &T);

    while (T--) {
        int N; // Weight of pulp in kg
        scanf("%d", &N);

        // Each kg of pulp makes 1000 pages
        // Each notebook consists of 100 pages
        int pages = N * 1000; // Total pages from N kg of pulp
        int notebooks = pages / 100; // Total notebooks

        printf("%d\n", notebooks);
    }

    return 0;
}


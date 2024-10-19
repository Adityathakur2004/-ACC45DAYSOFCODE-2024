#include <stdio.h>

int main() {
    int T; // Number of test cases
    scanf("%d", &T);

    while (T--) {
        int X, Y; // Time taken by BIKE and CAR respectively
        scanf("%d %d", &X, &Y);

        if (X < Y) {
            printf("BIKE\n"); // BIKE is faster
        } else if (X > Y) {
            printf("CAR\n"); // CAR is faster
        } else {
            printf("SAME\n"); // Both take the same time
        }
    }

    return 0;
}

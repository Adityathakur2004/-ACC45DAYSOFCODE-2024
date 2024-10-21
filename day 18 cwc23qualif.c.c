#include <stdio.h>
#include <math.h>

int main() {
    int T; // Number of test cases
    scanf("%d", &T);
    
    while (T--) {
        int N, A, B;
        scanf("%d %d %d", &N, &A, &B);
        
        // Calculate the number of rounds
        int R = log2(N);
        
        // Calculate the total time
        int total_time = R * A + (R - 1) * B;
        
        // Print the result for the current test case
        printf("%d\n", total_time);
    }
    
    return 0;
}

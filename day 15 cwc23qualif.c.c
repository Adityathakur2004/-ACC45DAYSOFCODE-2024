#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T); // Read the number of test cases

    while (T--) {
        int N, K, M;
        scanf("%d %d %d", &N, &K, &M); // Read N, K, M for each test case
        
        int capacity_per_bag = K * M; // Calculate capacity of one bag
        // Calculate minimum bags needed
        int bags_needed = (N + capacity_per_bag - 1) / capacity_per_bag; 
        
        printf("%d\n", bags_needed); // Output the result
    }

    return 0;
}

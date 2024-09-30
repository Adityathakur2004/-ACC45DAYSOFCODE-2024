#include <stdio.h>

int main() {
	int T; // Number of test cases
    scanf("%d", &T);
    
    while (T--) {
        int X, Y; // Working hours from Monday to Thursday and on Friday
        scanf("%d %d", &X, &Y);
        
        // Calculate total working hours in a week
        int totalHours = (X * 4) + Y; // 4 days of X hours + 1 day of Y hours
        
        // Print the total working hours
        printf("%d\n", totalHours);
    }
    
    return 0;

}


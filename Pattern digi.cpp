#include <stdio.h>

int main() {
    int num = 1;  
    int rows = 4; // Number of rows in the pattern

    for (int i = 1; i <= rows; i++) { 
        // Printing spaces for right alignment
        for (int s = 1; s <= rows - i; s++) { 
            printf("  "); // Two spaces for better alignment
        }
        // Printing numbers
        for (int j = 1; j <= i; j++) { 
            printf("%d ", num);
            num++;
        }
        printf("\n");  // Move to the next line
    }
    return 0;
}


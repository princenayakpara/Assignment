#include <stdio.h>

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    for (int r = 1; r <= n; r++) {
        // Print spaces
        for (int s = 1; s <= n - r; s++) {
            printf(" ");
        }
        // Print stars
        for (int k = 1; k <= r; k++) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
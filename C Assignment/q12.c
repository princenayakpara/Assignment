#include <stdio.h>

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    for (int r = 1; r <= n; r++) {
        
        for (int s = 1; s <= (n - r) * 2; s++) {
            printf(" ");
        }
        
        for (int i = 0; i < r; i++) {
            printf("%c ", 'A' + i);
        }
        printf("\n");
    }
    return 0;
}
#include <stdio.h>

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    for (int r = 1; r <= n; r++) {
        
        for (int s = 1; s <= (n - r) * 2; s++) {
            printf(" ");
        }
       
        for (int num = 1; num <= r; num++) {
            printf("%d ", num);
        }
        printf("\n");
    }
    return 0;
}
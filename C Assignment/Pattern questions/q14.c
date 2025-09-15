#include <stdio.h>

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    for (int r = 1; r <= n; r++) {
       
        for (int s = 1; s <= 2 * (n - r); s++) {
            printf(" ");
        }
      
        for (int num = 1; num <= 2 * r - 1; num++) {
            printf("%d ", num);
        }
        printf("\n");
    }
    return 0;
}
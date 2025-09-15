#include <stdio.h>

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    for (int r = 1; r <= n; r++) {
       
        for (int s = 1; s <= n - r; s++) {
            printf(" ");
        }
        
        for (int star = 1; star <= 2 * r - 1; star++) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
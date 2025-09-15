#include <stdio.h>

int main() {
    int n,i; 
    printf("Enter a number: ");
    scanf("%d",&n);
    for(int i = 1; i <=n; i++) {
        printf("");
        printf("%d", i);
    }
    printf("\n");
    return 0;
}
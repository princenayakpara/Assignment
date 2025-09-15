#include <stdio.h>


    int main() {
    int n;
    printf("Enter n: ");
    scanf("%d", &n);

    if (n > 26) {
        printf("Please enter n <= 26");
        return 0;
    }
    for(int i=n; i>0; i--) {
        for(int j=0; j<=n-i; j++) {
        printf("%c", 'A' + j);} 
        printf("\n");
    }
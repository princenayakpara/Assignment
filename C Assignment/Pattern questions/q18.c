#include <stdio.h>


    int main() {
    int n,i,j; 
    printf("Enter a number: ");
    scanf("%d",&n);
    for(int i =1; i<=n; i++) {
        
        for(int j=0; j<=n-i; j++) {
            printf(" ");
        printf("%c", 'A' + j );} 
        printf("\n");
    }
   

    return 0;
}
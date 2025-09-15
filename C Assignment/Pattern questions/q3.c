#include <stdio.h>

int main() {
    int n,i; 
    printf("Enter a number: ");
    scanf("%d",&n);
    for(int i = 0; i <n; i++) {
        printf(" ");
        // printf("%d", i);
        printf("%c", 'A' + i);
    }
   
    return 0;
}
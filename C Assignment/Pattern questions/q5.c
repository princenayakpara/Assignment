#include <stdio.h>

int main() {
    int n,i; 
    printf("Enter a number: ");
    scanf("%d",&n);
    for(int i =1; i<=n; i++){
        for(int j=1;j<=n;j++){
              printf(" ");
            printf("%d",j);
           }
         
           printf("\n");
    }
   
    return 0;
}
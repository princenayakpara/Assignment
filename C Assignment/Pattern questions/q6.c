#include <stdio.h>

int main() {
    int n,i; 
    printf("Enter a number: ");
    scanf("%d",&n);
    for(int i =0; i<n; i++){
        for(int j=0;j<n;j++){
              printf(" ");
            printf("%c",'A'+j);
           }
         
           printf("\n");
    }
   
    return 0;
}
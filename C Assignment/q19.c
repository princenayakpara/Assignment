#include <stdio.h>

int main() {
    int n = 5;
    int num = 1;  // counter

    for (int i = 1; i <= n; i++) {         // rows
        for (int j = 1; j <= i; j++) {     // numbers in row
            printf("%d ", num);
            num++; // increment after printing
        }
        printf("\n");
    }
    return 0;
}
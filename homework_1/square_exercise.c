#include <stdio.h>

void printAsteriskSquare(int number);

int main(){
    int number;
    printf("Enter the number of asterisks: ");
    scanf("%d", &number);
    printAsteriskSquare(number);
    return 0;
}

void printAsteriskSquare(int number){
    int i, j;
    for(i = 0; i < number; i++){
        for(j = 0; j < number; j++){
            printf("*");
        }
        printf("\n");
    }
}
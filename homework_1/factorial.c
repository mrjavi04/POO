#include <stdio.h>
#include "conio.h"

//dec var globales, CTES, func
void ingresarDato (int *numero);
int calcularFactorial (int numero, int factorial);
//Prog prog
int main(){
    //var locales
    int numero, factorial=1;
    ingresarDato(&numero);
    factorial = calcularFactorial (numero, factorial);
    //mostrar el resultado
    printf("\nEl valor del factorial es: %d\n",factorial);
    return 0;
}
//Ingrese del numero
void ingresarDato (int *numero){
    printf("Ingrse un numero: ");
    scanf("%d", numero);
}
//calculo factorial creciente
int calcularFactorial (int numero, int factorial){
    int i;
    for (i = 1; i <= numero; i++){
        printf("\nEl valor i es: %d\n",i);
        factorial = factorial*i;
    }
    return factorial;
}
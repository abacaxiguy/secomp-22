#include <stdio.h>


int calcula(int zero, int um, int dois, int tres, int n, int valor){
    if (n == 0){
        valor += zero;
        return valor;
    }
    else if (n == 1) valor += um;
    else if (n == 2) valor += dois;
    else if (n == 3) valor += tres;

    else if (n >= 4){
        valor += 9 * calcula(zero, um, dois, tres, n - 1, valor) + 2 * calcula(zero, um, dois, tres, n - 2, valor) - 5 * calcula(zero, um, dois, tres, n - 3, valor) + calcula(zero, um, dois, tres, n - 4, valor);
    }

   return valor;
}


int main(){
    int zero, um, dois, tres, n, valor = 0;

    scanf("%d %d %d %d %d", &zero, &um, &dois, &tres, &n);

    printf("%d\n", calcula(zero, um, dois, tres, n, valor));

    return 0;
}
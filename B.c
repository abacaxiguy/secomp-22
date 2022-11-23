#include <stdio.h>

void loop(int i, int vezes, int valores[], long long int x){
    if (i >= vezes) {
        printf("%d", x);
        return;
    }

    for (int j = vezes - 1; j >= i; j--){
        if ((valores[i] + valores[j]) % 2 != 0) x++;
    }

    loop(i+1, vezes, valores, x);
}

int main(){
    int vezes;

    scanf("%d", &vezes);

    int valores[vezes];

    for (int i = 0; i < vezes; i++){
        scanf("%d", &valores[i]);
    }

    loop(0, vezes, valores, 0);
}

#include <stdio.h>

void printa(int n, int x, int y){
    if (n <= 0) return;

    int a;

    scanf("%d", &a);

    printf("%c", (a * x + y) % 127);

    printa(n-1, x, y);
}

int main(){
    int n, x, y;

    scanf("%d %d %d", &n, &x, &y);

    printa(n, x, y);
}
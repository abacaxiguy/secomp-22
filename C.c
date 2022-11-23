#include <stdio.h>

int main(){
    int n;
    int a, b, c, d, e, f;

    scanf("%d", &n);

    f = n % 10;
    e = (int)(n * 0.1) % 10;
    d = (int)(n * 0.01) % 10;
    c = (int)(n * 0.001) % 10;
    b = (int)(n * 0.0001) % 10;
    a = (int)(n * 0.00001) % 10;

    if((a + b + c) % 7 == 0 && (d + e + f) % 2 == 0){
        printf("YES");
    }
    else printf("NO");

    return 0;

}
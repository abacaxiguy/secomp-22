#include <stdio.h>


int main(){
    int a, b;
    int n;
    int y_p = 0, y_n = 0, x_p = 0, x_n = 0;

    scanf("%d", &n);
    
    char seq[n];
    scanf("%s", seq);

    scanf("%d %d", &a, &b);

    for (int i = 0; i < n; i++){
        if (seq[i] == 'L') y_n += -1;
        else if (seq[i] == 'R') y_p += 1;
        else if (seq[i] == 'U') x_n += -1;
        else if (seq[i] == 'D') x_p += 1;
    }

    // printf("y positivo = %d\ny negativo = %d\nx positivo = %d\nx negativo = %d", y_p, y_n, x_p, x_n);

    if (a >= 0 && x_p >= a){
        if (b >= 0 && y_p >= b) printf("YES");
        else if (b <= 0 && y_n <= b) printf("YES");
        else printf("NO");
    }
    else if (a <= 0 && x_n <= a){
        if (b >= 0 && y_p >= b) printf("YES");
        else if (b <= 0 && y_n <= b) printf("YES");
        else printf("NO");
    }

    else printf("NO");

    return 0;
}

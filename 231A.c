#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int p, v, t;
    int contador = 0;

    for(int i = 0; i < n; i++) {
        scanf("%d %d %d", &p, &v, &t);

        if(p + v + t >= 2) {
            contador++;
        }
    }

    printf("%d\n", contador);

    return 0;
}

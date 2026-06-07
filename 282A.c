#include <stdio.h>
#include <string.h>

int main() {
    int n;
    scanf("%d", &n);

    char operacao[4];
    int x = 0;

    for(int i = 0; i < n; i++) {
        scanf("%s", operacao);

        if(strchr(operacao, '+'))
            x++;
        else
            x--;
    }

    printf("%d\n", x);

    return 0;
}

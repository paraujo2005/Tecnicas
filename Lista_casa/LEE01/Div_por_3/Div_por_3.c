#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int d;

    while(scanf("%d", &d) && d != -1){
        char *num = (char *)malloc((d + 1) * sizeof(char));
        scanf("%s", num);

        int soma = 0;
        for (int i = 0; i < d; i++) {
            soma += num[i] - '0';
        }

        if (soma % 3 == 0) {
            printf("%d sim\n", soma);
        } else {
            printf("%d nao\n", soma);
        }

        free(num);
    }
    return 0;
}

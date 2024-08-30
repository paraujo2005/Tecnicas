#include <stdio.h>

int main(){
    long long int num;

    // Pegar valor
    scanf("%lld", &num);

    while(num != 1){
        printf("%lld ", num);

        // Se par
        if(num % 2 == 0){
            num = num/2;
        }

        // Se Impar
        else {
            num = (num * 3) + 1;
        }
    }

    printf("1");

    return 0;
}
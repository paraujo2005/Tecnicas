#include <stdio.h>

int primo(long long int num){
    if (num < 2) {
        return 0;
    }

    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return 0;
        }
    }

    return 1;
}

int main() {
    int n;
    long long int num;
    
    scanf("%d", &n);

    for(int i = 0; i < n; i++){

        scanf("%lld", &num);

        if(primo(num)){
            printf("o numero %lld eh primo\n", num);
        } else {
            printf("o numero %lld nao eh primo\n", num);   
        }
    }
    
    return 0;
}

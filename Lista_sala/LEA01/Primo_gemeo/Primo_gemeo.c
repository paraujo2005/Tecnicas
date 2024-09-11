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
    scanf("%d", &n);

    for(int i = 0; i < n; i++){
        int num;
        scanf("%d", &num);

        if(primo(num) && (primo(num - 2) || primo(num + 2))){
            printf("O numero %d eh um primo gemeo\n", num);
        } else {
            printf("O numero %d nao eh um primo gemeo\n", num);   
        }
    }
    
    return 0;
}
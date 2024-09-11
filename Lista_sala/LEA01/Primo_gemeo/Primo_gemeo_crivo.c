#include <stdio.h>

int primos[10000];
int N = 1000000;

void crivo(){
    for (int i = 0; i < N; i++) primos[i] = 1;

    primos[0] = primos[1] = 1;

    for (int i = 2; i < 100; i++) {
        if (primos[i]){
            for (int j = 2 * i; j < N; j += i){
                primos[j] = 0;
            }
        }
    }
}

int main(){
    crivo();

    

    return 0;
}
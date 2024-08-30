#include <stdio.h>

int main(){
    int n;

    //Receber valor N
    scanf("%d", &n);

    //Receber lista e organizar
    int lista[n];

    for(int i = 0; i < n - 1; i++){
        int num;
        scanf("%d", &num);

        if(i == 0){
            lista[0] = num;
        } else {
            for(int j = i - 1; j >= 0; j--){
                if(lista[j] > num){
                    lista[j + 1] = lista[j];
                    lista[j] = num;
                } else {
                    lista[j + 1] = num;
                    break;
                }
            }
        }
    }

    //Identificar valor faltante
    for(int i = 0; i < n - 1; i++){
        if((lista[0] - 1) != 0){
            printf("%d", lista[0] - 1);
            break;
        }
        
        if((lista[i + 1] - lista[i]) != 1){
            printf("%d", lista[i] + 1);
            break;
        }
    }

    return 0;
}
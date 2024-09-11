#include <stdio.h>

int main(){
    while(1){
        long long int n;

        //Receber valor N
        scanf("%lld", &n);

        if(n == -1) break;

        //Receber lista
        int lista[n];

        for(int i = 0; i < n; i++){
            int num;
            scanf("%d", &num);
            lista[i] = num;
        }

        //Identificar valor sem par
        int sem_par = 0;
        for(int i = 0; i < n; i++){
            sem_par ^= lista[i];
        }

        printf("%d\n", sem_par);
    }

    return 0;
}
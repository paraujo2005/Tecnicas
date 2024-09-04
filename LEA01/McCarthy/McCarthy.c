#include <stdio.h>

long long int M(long long int n){
    if(n > 100){
        return n - 10;
    } else {
        return M(M(n + 11));
    }
};

int main(){
    long long int c;
    long long int n;

    scanf("%lld", &c);

    for(int i = 0; i < c; i++){
        scanf("%lld", &n);
        n = M(n);
        printf("%lld\n", n);
    }

    return 0;
}
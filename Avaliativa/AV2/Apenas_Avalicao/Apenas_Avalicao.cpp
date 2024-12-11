#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int N, K, A;
    cin >> N >> K;
 
    multiset<int> maiores;
 
    for(int i = 0; i < K; i++){
        maiores.insert(0);
    }
 
    int aux = 0;
    while(N--){
        cin >> A;
 
        if(A > *maiores.begin()){
            maiores.erase(maiores.begin());
            maiores.insert(A);
        }
 
        double media = 0;
        for(auto valor : maiores){
            media += valor;
        }
 
        media = media/K;
 
        cout << fixed << setprecision(1) << media << endl;
    }
 
    return 0;
}
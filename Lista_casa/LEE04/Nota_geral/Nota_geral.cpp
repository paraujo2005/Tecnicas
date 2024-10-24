#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    
    int A, N;
    int lista[11] = {0};
    
    cin >> A;

    while(A--){
        cin >> N;
        lista[N]++;
    }

    stringstream buffer;

    for(int i = 0; i <= 10; ++i){
        while(lista[i]--){
            buffer << i << '\n';
        }
    }   

    cout << buffer.str();

    return 0;
}
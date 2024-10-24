#include<bits/stdc++.h>
using namespace std;

int main(){
    int N;
    long long int V;
    
    cin >> N;

    while(N--){
        cin >> V;

        if(V == 0){
            cout << "None" << endl;
        } else {
            int contador = 0;
            while(V != 0){
                if(((V >> contador) & 1) == 1){
                    cout << contador + 1 << endl;
                    break;
                } else {
                    contador++;
                }
            }
        }
    }  

    return 0;
}
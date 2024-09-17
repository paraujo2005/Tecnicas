#include <bits/stdc++.h>
using namespace std;

int main(){
    long long int a, b, c;
    int n;

    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> a >> b >> c;

        long long int resultado = a ^ b ^ c;

        if((a ^ b ^ resultado) == c){
            cout << resultado << endl;
        } else {
            cout << "-1" << endl;
        }
    }

    return 0;
}
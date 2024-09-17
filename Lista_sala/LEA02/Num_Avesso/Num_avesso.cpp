#include <bits/stdc++.h>
using namespace std;

int main(){
    unsigned long int n;
    unsigned long int resultado = 0;
    
    cin >> n;

    for(int i = 0; i < 32; i++){
        resultado |= ((n >> i) & 1) << (31 - i); 
    }

    cout << resultado << endl;

}
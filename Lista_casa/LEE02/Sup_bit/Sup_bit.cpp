#include <bits/stdc++.h>
using namespace std;

int main(){
    int b;
    long long int n, v;

    cin >> n >> b;

    for(int i = 0; i < n; i++){
        cin >> v;
        v |= (1 << b);

        cout << v << endl;
    }
    
    return 0;
}

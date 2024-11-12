#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int N, K, A, desejado;
    unordered_set<int> nums;
 
    cin >> N >> K;
 
    while(N--){
        cin >> A;
        desejado = K - A;
 
        if(nums.count(desejado) != 0){
            cout << A << " " << desejado << endl;
            return 0;
        }

        nums.insert(A);
    }
 
    cout << "Nao existe" << endl;
 
    return 0;
}
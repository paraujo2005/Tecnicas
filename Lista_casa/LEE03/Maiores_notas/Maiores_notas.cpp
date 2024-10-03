#include <bits/stdc++.h>
using namespace std;
 
int main(){
  long long int A, Q;
 
  cin >> A >> Q;
 
  vector<long long int> notas(A);
  vector<long long int> comp(Q);
 
  for(long long int i = 0; i < A; i++){
    cin >> notas[i];
  }
 
  for(long long int i = 0; i < Q; i++){
    cin >> comp[i];
  }
 
  for(long long int i = 0; i < Q; i++){
    auto it = upper_bound(notas.begin(), notas.end(), comp[i]);
 
    long long int notas_maiores = notas.end() - it;
 
    cout << notas_maiores << " notas maiores que " << comp[i] << endl;
  }
 
  return 0;
}
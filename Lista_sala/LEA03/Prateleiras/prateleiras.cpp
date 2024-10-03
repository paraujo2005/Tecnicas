#include <bits/stdc++.h>
using namespace std;
 
int main() {
  int N;
  cin >> N;
  vector<string> livros(N);
 
  for(int i = 0; i < N; i++){
    cin >> livros[i];
  }
 
  sort(livros.begin(), livros.end(), [](const string &a, const string &b){
    if(a.size() != b.size()){
      return a.size() < b.size();
    } else {
      return a < b;
    }
  });
 
  for(auto livro : livros){
    cout << livro << endl;
  }
  
  return 0;
}
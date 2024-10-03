#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int J;
    cin >> J;
 
    vector<pair<string, string>> nomes(J);
 
    for (int i = 0; i < J; i++) {
        cin >> nomes[i].first >> nomes[i].second;
    }
 
    sort(nomes.begin(), nomes.end(), [](const auto& a, const auto& b) {
      if (a.second == b.second) {
        return a.first > b.first;
      }
      return a.second > b.second;
    });
 
    for (int i = 0; i < J; i++) {
        cout << i + 1 << ". " << nomes[i].second << " - " << nomes[i].first << endl;
    }
 
    return 0;
}

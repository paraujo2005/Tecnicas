#include <bits/stdc++.h>
using namespace std;

int main(){
    int T;
    string R, S;
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> T;

    while(T--){
        cin >> R >> S;

        if(R.size() != S.size()){
            cout << "DIFERENTES" << endl; 
            continue;  
        }

        unordered_map<char, int> freq;

        for (auto c : R) freq[c]++;
        for (auto c : S) freq[c]--;

        if(all_of(freq.begin(), freq.end(), [](const pair<char, int>& p) { return p.second == 0; })){
            cout << "ANAGRAMAS" << endl;
        } else {
            cout << "DIFERENTES" << endl;
        }
    }

    return 0;
}
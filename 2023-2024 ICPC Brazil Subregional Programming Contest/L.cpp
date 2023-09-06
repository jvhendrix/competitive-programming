#include <bits/stdc++.h>

using namespace std;

int main(void) {

    string s;
    int k;

    cin >> s;
    cin >> k;

    vector<vector<char>> aux;

    for (int i = 0; i < k; i++) {
        vector<char> tmp;
        aux.push_back(tmp);
    }

    for (int i = 0; i < s.size(); i++) {
        aux[i%k].push_back(s[i]);
    }


    for (auto &v : aux) {
        sort(v.begin(), v.end());
    }
   

    for (int i = 0; i < s.size(); i++) {
        cout << aux[i%k][i/k];
    }
    cout << endl;

    return 0;
}
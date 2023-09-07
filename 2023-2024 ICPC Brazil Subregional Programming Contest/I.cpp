#include <bits/stdc++.h>

using namespace std;

int main(void) {
    
    int n;
    vector<int> bin;

    long long result = 0;

    cin >> n;
    
    for (int i = 0; i < n; i++) {
        int tmp;
        cin >> tmp;

        bin.push_back(tmp);
    }
 
    long long oddSubs = 0;
    long long evenSubs = 0;

    for (int i = 0; i < n; i++) {
        if (bin[i] == 1) {          
            swap(oddSubs, evenSubs);
            oddSubs++;
        }
        else {
            evenSubs++;           
        }
        result += oddSubs; 
    }
    cout << result << endl;
    return 0;
}


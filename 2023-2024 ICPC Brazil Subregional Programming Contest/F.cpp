#include <bits/stdc++.h>

using namespace std;

int main(void) {
    int disposition;
    int tiring;
    int revigorating;
    int activities = 0;

    vector<int> tirAct;
    vector<int> revAct;

    cin >> disposition;
    cin >> tiring;
    cin >> revigorating;

    for (int i = 0; i < tiring; i++) {
        int tmp;
        cin >> tmp;
        tirAct.push_back(tmp);
    }

    for (int i = 0; i < revigorating; i++) {
        int tmp;
        cin >> tmp;
        revAct.push_back(tmp);
    }

    for (auto a : revAct) {
        disposition += a;
        activities++;
    }

    for (auto a : tirAct) {
        if (disposition < a) {
            break;
        }
        else {
            disposition -= a;
            activities++;
        }
    }

    cout << activities << endl;
}
#include <bits/stdc++.h>

using namespace std;

int main(void) {

    int rides;
    int height;

    cin >> rides;
    cin >> height;

    int validRides = 0;
    int tmpRide;
    for (int i = 0; i < rides; i++) {
        cin >> tmpRide;
        if (tmpRide <= height) {
            validRides++;
        }
    }

    cout << validRides << endl;
}
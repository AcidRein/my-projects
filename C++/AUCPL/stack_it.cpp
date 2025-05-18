#include <bits/stdc++.h>
using namespace std;

int main(void) {
    long long numBalls; 
    
    cin >> numBalls;
    long long height = (numBalls * (numBalls + 1) * (numBalls + 2)) / 6;

    if ((numBalls * (numBalls + 1) * (numBalls + 2)) % 6 == 0) { // if int
        cout << height << endl;
    } else {
        cout << height - 1 << endl;
    }

    return 0;
}
#include <bits/stdc++.h>
using namespace std;

int main(void) {
    int numQueue;
    map<string, int> curQueue;
    cin >> numQueue;

    for (int i = 0; i < numQueue; i++) {
        string name;
        cin >> name;

        curQueue[name] += 1;
    }

    for (auto i : curQueue) {
        if (i.second % 2 == 0) {
            if (i.second > 2) {
                i.second += 2;
                for (int j = 0; j < (i.second / 2); j++) {
                cout << i.first << endl;
            }
            }
            
        }
    }

    return 0;
}
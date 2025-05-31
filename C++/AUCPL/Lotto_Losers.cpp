#include <bits/stdc++.h>
#include <set>
using namespace std;

int main(void) {
    int numWinnings;
    set<int> record;
    set<pair<int, int>> winnings; // {number, index}
    cin >> numWinnings;

    for (int i = 0; i < numWinnings; i++) {
        int x; 
        cin >> x;
        if (!(record.find(x) != record.end())) { // x NOT in recorded
            winnings.insert({x, (i+1)});
            record.insert(x);
        }       
    }

    int numTickets;
    unordered_map<int, int> tickets;
    cin >> numTickets;

    for (int i = 0; i < numTickets; i++) {
        int x;
        cin >> x;
        tickets[x] += 1;
    }

    int total = -(numTickets * 5);
    for (auto i : winnings) {
        if (tickets.find(i.first) != tickets.end()) {
            total += (i.second) * tickets[i.first];
        }
    }

    cout << total << endl;
    return 0;

}
#include <bits/stdc++.h>
#include <map>
using namespace std;

int main(void) {
    int numTeams, roundParticipated;
    map<string, vector<int>> teamInfo; // teamName: [total rounds, total time]

    cin >> numTeams;
    for (int i = 0;  i < numTeams; i++) {
        string teamName;
        cin >> teamName;

        int roundRes, totalRounds, totalTime;
        cin >> roundRes;

        // Get total rounds and time for specific team
        for (int i = 0; i < roundRes; i++){
            int x, y;
            cin >> x >> y;
            totalRounds += x;
            totalTime += y;
        }

        // Store data
        teamInfo[teamName].push_back(totalRounds);
        teamInfo[teamName].push_back(totalTime);
    }

    string winnerName;
    int highestRound = 0, lowestTime = 2147483647; // Infinity

    // Loop through the map
    for (const auto& entry : teamInfo) {
        
        if (entry.second[1] > highestRound) {
            winnerName = entry.first;
        } else if (entry.second[1] == highestRound) {
            if (entry.second[2] < lowestTime) {
                winnerName = entry.first;
            }
        }

    }

    cout << winnerName << endl;
    
    return 0;
}
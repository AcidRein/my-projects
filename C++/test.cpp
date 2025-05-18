#include <bits/stdc++.h>
#include <set>
#include <map>
using namespace std;

int main(void){
    map<int, int> myMap = {
        {1, 3},
        {2, 5},
        {10, 2},
        {4, 40},
        {2, 9}};

    // Print entire Map
    cout << "Map:" << endl;
    for (auto i : myMap) {
        cout << i.first << " : " << i.second << endl;
    
    }

    int numIn;
    cin >> numIn;
    if (myMap.find(numIn) != myMap.end()) {
        cout << "Found" << numIn << "  in map" << endl;
    } else {
        cout << "Number: " << numIn << " NOT in map" << endl;
    }
    return 0;
    
}
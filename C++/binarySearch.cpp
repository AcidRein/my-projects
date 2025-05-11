#include <bits/stdc++.h>
using namespace std;

bool binarySearch(vector<int> arrayParam, int numFind){
    int arraySize = arrayParam.size();
    int leftPointer = 0, rightPointer = arraySize - 1;
    int middlePointer = leftPointer + (rightPointer - leftPointer) / 2;

    while (leftPointer <= rightPointer) {
        cout << "Current Pointers: Left: " << leftPointer << ", Right: " << rightPointer << ", Middle: " << middlePointer << ", MNumber: " << arrayParam[middlePointer] << endl;
        if (arrayParam[middlePointer] == numFind) {
            return true;

        } else if (numFind > arrayParam[middlePointer]) {
            leftPointer = middlePointer + 1;

        } else if (numFind < arrayParam[middlePointer]) {
            rightPointer = middlePointer - 1;
        }

        middlePointer = leftPointer + (rightPointer - leftPointer) / 2;
    }

    return false;

}

int main(void) {
    vector<int> myVector = {1, 3, 4, 5, 10, 13, 14, 20, 33, 50, 55, 70};
    //#####################[0, 1, 2, 3,  4,  5,  6,  7,  8,  9,  10,  11]
    int findMe;
    cin >> findMe;

    if (binarySearch(myVector, findMe)) {
        cout << "Found!" << endl;
    }

    return 0;
}
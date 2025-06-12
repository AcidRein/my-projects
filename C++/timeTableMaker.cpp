#include <bits/stdc++.h>
#include <map>

using namespace std;

// Struct for each class
struct ClassStruct{
    int classNum; // Display Purposes
    string type; // Workshop, Seminar, Practical (Grouping purposes)
    int day; // 1 for Monday, 5 for Friday 
    pair<int, int> time; // {From, To};
};


// Struct for each class
struct CourseStruct{
    string courseName; // Name of course (display purposes)
    map<string, vector<ClassStruct>> classesToChoose; // Type (Seminar, Workshop) : Choices

};


int main(void) {

}
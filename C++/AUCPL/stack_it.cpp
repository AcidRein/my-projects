#include <bits/stdc++.h>
#include <cmath>
using namespace std;

long double findRoot(int balls) {
    int a = 1, b = 3, c = 2, d = -6 * balls;

    double p = (3*a*c - b*b) / (3*a*a);
    double q = (2*b*b*b - 9*a*b*c + 27*a*a*d) / (27*a*a*a);

    // Discriminant
    double discriminant = (q*q / 4) + (p*p*p / 27);

    if (discriminant >= 0) {
        double u = cbrt(-q/2 + std::sqrt(discriminant));
        double v = cbrt(-q/2 - std::sqrt(discriminant));
        return u + v - (b / (3 * a));

    } else {
        return NAN;
    }
}

int main(void) {
    int numBalls; 
    
    cin >> numBalls;
    long double res = findRoot(numBalls);
    cout << floor(res) << endl;

    return 0;
}
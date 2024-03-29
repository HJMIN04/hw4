#include <fstream>
#include <iostream>
#include <cmath>
using namespace std;
int main() {
    ofstream xx("hw4_21.txt");
    if (!xx) {
        cout << " can't open file\n";
        return -1;
    }
    const float pi = 3.141592;
    float t, dt, T;
    t = 0.0;
    dt = 11. / 1000.;
    T = 1. / 10.;
    for (t = 0.0; t < T; t += dt) {
        xx << t << " " << sin(200 * pi * t) << endl;
    }
    xx.close();
    return 1;
}
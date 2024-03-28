#include <fstream>
#include <iostream>
#include <cmath>
using namespace std;
const float PI = 3.141592;
int main() {
    ofstream xx("hw4_17.txt");
    if (!xx) {
        cout << " can't open file\n";
        return -1;
    }
    float t, dt, T, PI = 3.141592;
    t = 0.0;
    dt = 1. / 24.;
    T = 8;
    for (t = 0.0; t < T; t += dt) {
        xx << t << " " << cos(t) << " " << sin(t) << endl;
    }
    xx.close();
    return 1;
}
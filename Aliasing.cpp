#include <iostream>
#include <fstream>
#include <cmath>
using namespace std;
const float PI = 3.141592;
int main() {
	float t = 0.0, dt, T;
	dt = 1. / 240.;
	T = 1. / 5.;
	ofstream seoul("homework.txt");
	if (!seoul) {
		cout << "can't open homework.txt\n";
		return 123;
	}
	for (t = 0.0; t < T; t += dt) {
		seoul << t << " " << 100 * cos(20 * PI * t) * cos(220 * PI * t) << " " << 60 * sin(240 * PI * t) + 80 * sin(220 * PI * t) << endl;
	}
	seoul.close();
	return 999;
}
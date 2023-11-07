#include <iostream>
#include <cmath>
using namespace std;
long long fact2(int k) {
	long long f = 1;
	if (k % 2 == 0) {
		for (int i = 2; i <= k; i += 2) {
			f *= i;
		}
	}
	else if (k == 0) {
		return 1;
	}
	else {
		for (int i = 3; i <= k; i += 2) {
			f *= i;
		}
	}
	return f;
}

long double t(double x) {
	long double snch = 0, sch = 0;
	for (int i = 0; i <= 10; i++) {
		snch += (pow(x, 2 * i + 1)) / (fact2(2 * i + 1));
	}
	for (int i = 0; i <= 10; i++) {
		sch += (pow(x, 2 * i)) / (fact2(2 * i));
	}
	return snch / sch;
}

int main() {
	double y;
	cin >> y;
	long double result = (7 * t(0.25) + 2 * t(1 + y)) / (6 - t(y * y - 1));
	cout << result;
}

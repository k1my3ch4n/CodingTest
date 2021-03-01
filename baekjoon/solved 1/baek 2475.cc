#include <iostream>
using namespace std;

int main() {
	int a, b, c, d, e;
	cin >> a >> b >> c >> d >> e;

	int sum;
	int na;
	int gum;

	sum = a * a + b * b + c * c + d * d + e * e;
	na = sum / 10;

	gum = sum - na * 10;

	cout << gum;
}
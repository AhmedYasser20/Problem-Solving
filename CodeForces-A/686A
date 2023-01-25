#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int main() {
	int n;
	long long int d;
	cin >> n>>d;

	long long int ice = d;
	int sadkid = 0;
	for (int i = 0; i < n; i++) {
		char sign;
		int x;
		cin >> sign;
		cin >> x;
		if (sign == '+') {
			ice += x;
		}
		else {
			if (ice >= x) {
				ice -= x;
			}
			else {
				sadkid++;
			}
		}
	}
	cout << ice << " " << sadkid;

}

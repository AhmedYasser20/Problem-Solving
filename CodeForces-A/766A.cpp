#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
#include <stack>
#include <queue>
using namespace std;
int findmax(int a, int b) {
	if (a > b)return a;
	return b;
}
int findmin(int a, int b) {
	if (a > b)return b;
	return a;
}

int main() {
	string a, b;
	cin >> a >> b;
	if (a.compare(b)==0) {
		cout << -1;
	}
	else {
		cout << findmax(a.size(), b.size());
	}
}

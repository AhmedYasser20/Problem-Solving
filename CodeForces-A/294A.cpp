#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int main() {
	int arr[100];
	int num,shots;
	cin >> num;
	for (int i = 0; i < num; i++) {
		cin >> arr[i];
	}
	cin >> shots;
	for (int i = 0; i < shots; i++) {
		int x, y;
		cin >> x >> y;
		if (x >= 2 && x!=num) {
			int temp = arr[x - 1];
			arr[x - 1] = 0;
			arr[x - 2] = arr[x - 2] + (y - 1);
			arr[x] = arr[x] + (temp - y);
		}
		if (x == 1) {
			int temp = arr[x - 1];
			arr[x - 1] = 0;
			arr[x] = arr[x] + (temp - y);
		}
		if (x == num) {
			int temp = arr[x - 1];
			arr[x - 1] = 0;
			arr[x - 2] = arr[x - 2] + (y - 1);
		}
	}
	for (int i = 0; i < num; i++) {
		cout << arr[i] << endl;
	}
}

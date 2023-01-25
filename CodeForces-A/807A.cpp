#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
#include <stack>
#include <queue>
#include<set>
#include<list>
#include<utility>
//#define char cs[] = "abcdefghijklmnopqrstuvwxyz";
using namespace std;



int main() {

	bool rated = 0, unrated = 0, maybe = 0;
	int n;
	cin >> n;
	int temp = 4126;
	for (int i = 0; i < n; i++) {
		int before, after;
		cin >> before >> after;
		if (temp >= before) {
			temp = before;
			if (after != before) {
				rated = true;
			}
		}
		else if (temp < before) {
			if (after != before) {
				temp = before;
				rated = true;
			}
			else {
				unrated = true;
			}
		}
	}
	if (rated) {
		cout << "rated";
	}
	else if (unrated) {
		cout << "unrated";
	}
	else {
		cout << "maybe";
	}


}

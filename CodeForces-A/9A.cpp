#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int main() {
	int y, w;
	cin >> y >> w;
	int max;
	if (y > w) {
		max = y;
	}
	else {
		max = w;
	}
	int num = 6 - max + 1;
	switch (num)
	{
	case 0:
		cout << "0/1" << endl;
		break;
	case 1:
		cout << "1/6" << endl;
		break;
	case 2:
		cout << "1/3" << endl;
		break;
	case 3:
		cout << "1/2" << endl;
		break;
	case 4:
		cout << "2/3" << endl;
		break;
	case 5:
		cout << "5/6" << endl;
		break;
	case 6:
		cout << "1/1" << endl;
		break;
	default:
		break;
	}
}

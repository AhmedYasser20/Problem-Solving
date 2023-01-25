#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int main() {
	char x;
	int arr[1000];
	int i = 0;
	cin >> x;
	while (x != '}') {
		cin >> x;
		if (x != ',' && x != '}') {
			arr[i] = x - 'a';
			i++;
		}
	}
	int count = 0;
	for (int j = 0; j < i; j++) {
		for (int k = j + 1; k < i; k++) {
			if (arr[j] == arr[k] && arr[k]!=-1) {
				
				arr[k] = -1;
			}
		}
	}
	for (int j = 0; j <i; j++) {
		if (arr[j] != -1) {
		    
			count++;
		}
	}
	cout <<  count;

}

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
#include <stack>
#include <queue>
#include<set>
#include<list>
#include<map>
#include<utility>
//#define char cs[] = "abcdefghijklmnopqrstuvwxyz";
#define lp(i, n)		for(int i=0;i<(int)(n);++i)
using namespace std;

//const int N = 100;
//bool adjmatrix[N][N];
//int adjmatrix[N][N];
//vector< vector<int> > adjList1;					
//vector< vector< pair<int, int> > > adjList2;

bool isPrime(int n)
{
	// Corner case
	if (n <= 1)
		return false;

	// Check from 2 to n-1
	for (int i = 2; i < n; i++)
		if (n % i == 0)
			return false;

	return true;
}
int countDigit(long long n)
{
	if (n == 0)
		return 1;
	int count = 0;
	while (n != 0)
	{
		n = n / 10;
		++count;
	}
	return count;
}

//rakz fe el type el data fe el input ^_^
int main() {
	int t=1;
	//cin >> t;
	while (t--) {
		int totalx = 0, totaly = 0, totalz = 0,n;
		cin >> n;
		lp(i, n) {
			int x, y, z;
			cin >> x >> y >> z;
			totalx += x;
			totaly += y;
			totalz += z;
		}
		if (totalx == 0 && totaly == 0 && totalz == 0)cout << "YES";
		else cout << "NO";
	}
}

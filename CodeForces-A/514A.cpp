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

int main() {
	string s;
	cin >> s;
	for (int i = 0; i < s.size(); i++) {
		if (s[i] <= '4' || (s[i] == '9' && i == 0))
			cout << s[i];
		else
			cout << '9' - s[i];
	}
		
}
 

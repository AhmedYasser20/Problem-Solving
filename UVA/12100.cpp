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
#define revsort(a,b) sort(a,b),reverse(a,b)
typedef long long ll;
int dx[9] = { 0,1,-1,1,-1,0,1,-1,0 };
int dy[9] = { 0,0,0,1,-1,-1 ,-1,1,1 };
using namespace std;
const int MAX = 1000;
int grid[MAX][MAX] = { 0 };
//void bigint(string s1, string s2) {
//	reverse(s1.begin(), s1.end());
//	reverse(s2.begin(), s2.end());
//	int a[MAX];
//	memset(a, 0, sizeof(a));
//	for (int i = 0; i < s1.length(); i++) {
//		for (int j = 0; j < s2.length(); j++) {
//			a[i + j] += (s1[i] - '0') + (s2[j] - '0');
//		}
//	}
//	for (int i = 0; i < MAX - 1; i++) {
//		a[i + 1] += a[i] / 10;
//		a[i] %= 10;
//	}
//}
int stringTointeger(string str)
{
	int temp = 0;
	for (int i = 0; i < str.length(); i++) {
		temp = temp * 10 + (str[i] - '0');
	}
	return temp;
}


int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t = 1;
	cin >> t;


	while (t--) {
			int n,pos;
			cin>>n>>pos;
			int prio[10];
			lp(i,10){prio[i]=0;}
			queue<pair<int,int>> q;
			lp(i,n){
				int temp;
				cin>>temp;
				q.push(make_pair(temp,i));
				prio[temp]++;
			}
			bool Found=false;
			int min=0;
			while (!Found)
			{
				bool flag=true;
				
				pair<int,int> temp=q.front();
				for(int i=temp.first+1;i<10;i++){
					if(prio[i]>0){
						flag=false;
						break;
					}
				}
				if(flag){
					min++;
						if(temp.second==pos){
							cout<<min<<endl;
							Found=true;
							break;
						}
					prio[temp.first]--;
				}
				else{
					q.push(temp);
				}
				q.pop();
			}
			
	}
}

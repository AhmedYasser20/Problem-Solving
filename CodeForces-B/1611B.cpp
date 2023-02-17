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
#include <cstring>
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
bool good(int pp,int mm,int m){
	return pp>=m && mm>=m &&(mm+pp)/4>=m;
}


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
//#ifndef ONLINE_JUDGE
//    freopen("in.text", "r", stdin);
//    freopen("out.text", "w", stdout);
//#endif

    int t = 1;
     cin >> t;
    while (t--) {
		int p,m;
		cin>>p>>m;
		ll l=0,r=min(p,m)+1;
		while(l+1<r){
				int mid=l+(r-l)/2;
				if(good(p,m,mid)){
					l=mid;
				}
				else{
				r=mid;
				}
		}
		cout<<l<<endl;


        }
	

    }

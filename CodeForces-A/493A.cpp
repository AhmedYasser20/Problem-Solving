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



int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
#ifndef ONLINE_JUDGE
    freopen("in.text", "r", stdin);
    freopen("out.text", "w", stdout);
#endif

    int t = 1;
    // cin >> t;
    while (t--) {
        string home,away;
        cin>>home>>away;
        int n;
        cin>>n;
        map<int,int> mph,mpa;//0 no card 1 yellow 2 red;
        lp(i,n){
            int min,pnum;
            char team,card;
            cin>>min>>team>>pnum>>card;
            if(team=='h'){
                if(card=='r' && mph[pnum]!=-1){
                    cout<<home<<" "<<pnum<<" "<<min<<endl;
                    mph[pnum]=-1;
                }
                else if(mph[pnum]!=-1){
                mph[pnum]++;
                if(mph[pnum]==2){
                    cout<<home<<" "<<pnum<<" "<<min<<endl;
                    mph[pnum]=-1;
                    }
                }
            }
            else {
                if(card=='r'&& mpa[pnum]!=-1){
                    cout<<away<<" "<<pnum<<" "<<min<<endl;
                    mpa[pnum]=-1;
                }
                else if(mpa[pnum]!=-1){
                mpa[pnum]++;
                if(mpa[pnum]==2){
                    cout<<away<<" "<<pnum<<" "<<min<<endl;
                    mpa[pnum]=-1;
                    }
                }
            }
        }

    }
}


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
		int n,s,r;
        cin>>n>>s>>r;
        vector<int> sq;
        sq.push_back(s-r);
        int v=s-r;
        while(v>0){
            int count=r/v;
            lp(i,count){
                sq.push_back(v);
            }
            r=r%v;
            v--;
            
        }
        int i=sq.size()-1;
        while(sq.size()!=n){
                if(sq[i]==1){
                    i--;
                }
                else{
                    sq[i]--;
                    sq.push_back(1);
                }
        }
         for(auto it:sq){
            cout<<it<<" ";
        }
        cout<<endl;
	}
}

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
       int n,temp;
       cin>>n;
       vector<int> vec;
       lp(i,n){
        cin>>temp;
        vec.push_back(temp);
       }
       sort(vec.begin(),vec.end());
       int t;
       cin>>t;
       lp(i,t){
        int value;
        cin>>value;
        int count=0;
        int l=0;
        int r=vec.size()-1;
        while (r-l>1)
        {
            int mid=l+(r-l)/2;
            if(vec[mid]<=value){
                l=mid;
            }
            else{
                r=mid-1;
            }
        }
         if(vec[r]<=value){
            cout<<r+1<<endl;
         }
         else{
            if(vec[l]<=value)
            cout<<l+1<<endl;
            else
            cout<<0<<endl;
         }   




       }
    }
}
 

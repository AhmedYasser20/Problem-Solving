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
  // freopen("in.text", "r", stdin);
  // freopen("out.text", "w", stdout);
    int t = 1;
     //cin >> t;
    while (t--) {
      int q;
      cin>>q;
      set<pair<int,int>> mono;//id money;
      auto cmp=[&](pair<int,int> a,pair<int,int> b ){
        if(a.first==b.first){
            return a.second<b.second;
        }
        return a.first>b.first;
      };
       set<pair<int,int>,decltype(cmp)> poly(cmp);//money ,id;
       int id=0;
       while (q--)
       {
        int op;
        cin>>op;
        if(op==1){
            id++;
            int money;
            cin>>money;
            mono.insert({id,money});
            poly.insert({money,id});
        }
        else if(op==2){
            pair<int,int> temp=*mono.begin();
            cout<<temp.first<<" ";
            mono.erase(temp);
            swap(temp.first,temp.second);
            poly.erase(temp);
        }
        else {
            pair<int,int> temp=*poly.begin();
            cout<<temp.second<<" ";
            poly.erase(temp);
            swap(temp.first,temp.second);
            mono.erase(temp);
        }
       }
       
    }
}


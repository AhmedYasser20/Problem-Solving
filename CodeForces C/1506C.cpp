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



int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("in.text", "r", stdin);
    //freopen("out.text", "w", stdout);
    int t = 1;
     cin >> t;
    while (t--) {
       string a,b;
       cin>>a>>b;
       map<char,vector<int>> mpa,mpb;
       for(int i=0;i<a.size();i++)
            mpa[a[i]].push_back(i);
         for(int i=0;i<b.size();i++)
            mpb[b[i]].push_back(i); 
        int lcs=0;
        for (char c = 'a'; c <= 'z'; c++)
        {
            for(auto it : mpa[c]){
                int mx=0;
                for(auto it2:mpb[c]){
                    int i=it,j=it2,count=0;
                    while (i<a.size() && j<b.size() &&a[i]==b[j])
                    {
                        count++;
                        i++;
                        j++;
                    }
                    mx=max(mx,count);
                }
                lcs=max(lcs,mx);
            }
        }
        cout<<a.size()-lcs+b.size()-lcs<<endl;


    }
}


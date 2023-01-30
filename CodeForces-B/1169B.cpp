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
bool isvalid(int a,int b,vector<pair<int,int>> & v){
    for(int i=0;i<v.size();i++){
        if(v[i].first!=a && v[i].second!=a && v[i].first!=b&&v[i].second!=b){
            return false;
        }
    }
    
    return true;
}


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t = 1;
    //cin >> t;


    while (t--) {
       int n,m;
       cin>>n>>m;
       vector<pair<int,int>> V(m);
       for (int i = 0; i < m; i++)
       {
        cin>>V[i].first>>V[i].second;
       }
       pair<int ,int> x=V[0],y=V[0];
        for (int i = 1; i < m; i++)
        {
            if(V[i].first!=x.first && V[i].first!=x.second && V[i].second!=x.first&&V[i].second!=x.second && V[i].first<=n && V[i].second<=n){
                y=V[i];
                break;
            }
        }
        if( isvalid(x.first,y.first,V) ||isvalid(x.first,y.second,V) || isvalid(x.second,y.first,V) || isvalid(x.second,y.second,V)){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }       
       
    }
}

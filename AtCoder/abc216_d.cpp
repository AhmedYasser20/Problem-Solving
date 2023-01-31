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
    int t = 1;
    //cin >> t;


    while (t--) {
        int n, m;
        cin >> n >> m;
        vector<vector<int>> fa(n+1);
        vector<stack<int>> q(m);
        queue<int> found;
        lp(i, m) {
            int c;
            cin >> c;
            lp(j, c) {
                int temp;
                cin >> temp;
                q[i].push(temp);
            }
            fa[q[i].top()].push_back(i);
            if(fa[q[i].top()].size()==2){
                found.push(q[i].top());
            }
        }
       while (!found.empty())
       {
        int color=found.front();
        found.pop();
        for(auto v : fa[color]){
            q[v].pop();
             if (!q[v].empty()){
                    fa[q[v].top()].push_back(v);
             if(fa[q[v].top()].size()==2){
                found.push(q[v].top());
             }
             }       
        }
        fa[color].clear();
       }
       
        bool flag = true;
        lp(i, n) {
            if (fa[i].size() != 0) {
                flag = false;
                break;
            }
        }
        if (flag)cout << "Yes" << endl;
        else cout << "No" << endl;

    }
}

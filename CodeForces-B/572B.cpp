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
   // cin >> t;
    while (t--) {
    int n,s;
    cin>>n>>s;
    set<int> Bset,Sset;
    map<int ,int> Bmp,Smp;
    lp(i,n){
        char Type;
        int p,q;
        cin>>Type>>p>>q;
        if(Type=='S'){
            if(Sset.find(p)!=Sset.end()){
                Smp[p]+=q;
            }
            else{
                Sset.insert(p);
                Smp[p]=q;
            }
        }
        else{
            if(Bset.find(p)!=Bset.end()){
                Bmp[p]+=q;
            }
            else{
                Bset.insert(p);
                Bmp[p]=q;
            }
        }
    }
    if(!Sset.empty()){
     set<int>::reverse_iterator rit=Sset.rbegin();
     int SetSize=Sset.size();
     int sz=min(s,SetSize);
     lp(i,SetSize-s){
        rit++;
     }
     for (int i=0; i < sz; i++)
     {
       cout<<"S " <<*rit<<" "<<Smp[*rit]<<endl;
       rit++;
     }
    }
    if(!Bset.empty()){
     set<int>::reverse_iterator rit2=Bset.rbegin();
     int SetSize=Bset.size();
     int sz=min(s,SetSize);
     for (int i=0; i < sz; i++)
     {
       cout<<"B " <<*rit2<<" "<<Bmp[*rit2]<<endl;
       rit2++;
     }
    }
    }
}

 	 		 	     			  	  	 	 			

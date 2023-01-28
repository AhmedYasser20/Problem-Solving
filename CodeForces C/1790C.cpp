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
        int n;
        cin >> n;
        deque<int> d;
         
                   
        int** ptr = new int* [n];
        lp(i, n) {
            ptr[i] = new int[n];
        }
        lp(i, n) {
            lp(j, n - 1) {
                int y;
                cin >> y;
                ptr[i][j] = y;
            }
        }
        int num1=0,num2=0,pos1=0,pos2=0,count1=0,count2=0;
        for(int i=0;i<n-1;i++){
         if(ptr[i][n-2]!=ptr[i+1][n-2]){
            num1=ptr[i][n-2];
            pos1=i;
            num2=ptr[i+1][n-2];
            pos2=i+1;
            count1++;
            count2++;
         }
        }
        for(int i=0;i<n-1;i++){
         if(ptr[i][n-2]==num1){
            count1++;
         }
         else{
            count2++;
         }
        }
        if(count1>count2){
            lp(i,n-1)cout<<ptr[pos2][i]<<" ";
            cout<<num1<<endl;
        }
        else{
              lp(i,n-1)cout<<ptr[pos1][i]<<" ";
            cout<<num2<<endl;
        }
           
    }
}

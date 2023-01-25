#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
#include <stack>
#include <queue>
//#define char cs[] = "abcdefghijklmnopqrstuvwxyz";
using namespace std;
int findmax(int a, int b) {
    if (a > b)return a;
    return b;
}
int findmin(int a, int b) {
    if (a > b)return b;
    return a;
}


int main() {
    char typeofshift;
    cin >> typeofshift;
    string keybraod="qwertyuiopasdfghjkl;zxcvbnm,./";
    string word;
    cin >> word;
    for (int i = 0; i < word.size(); i++) {
        int index = keybraod.find(word[i]);
        if (typeofshift == 'R') {
            cout << keybraod[index - 1];
        }
        else {
            cout << keybraod[index + 1];
        }
    }
}

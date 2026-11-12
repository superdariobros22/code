#include<bits/stdc++.h>
using namespace std;

int main() {
    int n, i=0, b=0;
    while(cin >> n) {
        if (n>80) {
            cout << i;
            b=1;
        }
        i++;
    }
    if (b==0) cout << -1;
}
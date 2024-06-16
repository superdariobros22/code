#include<bits/stdc++.h>
using namespace std;
int main() {
    int a;
    while(cin >> a) {
    bool x=true;
    int n=0;
    while(x==true) {
        if (a>=(pow(2, n))) {
            n++;
        } else {
            x=false;
        }
    }
    cout << n;
    }
}
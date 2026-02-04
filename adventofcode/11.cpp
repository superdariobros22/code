#include<bits/stdc++.h>
using namespace std;

int main() {
    string x;
    int n=50, c=0;
    while(cin >> x) {
        if (x[0]=='R') {
            x[0]='0';
            int i=stoi(x);
            n=n+i;
            if (n>99) {
                n=n-100;
            }
            if (n==0) {
                c++;
            }
        } else if (x[0]=='L') {
            x[0]='0';
            int i=stoi(x);
            n=n-i;
            if (n<0) {
                n=n+100;
            }
            if (n==0) {
                c++;
            }
        }
    }
    cout << c;
}
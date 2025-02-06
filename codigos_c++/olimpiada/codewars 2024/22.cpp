#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    char c;
    cin >> c >> n;
    string lin, con, sin;
    int x=9+(8*n);
    for (int i=0 ; i<x ; i++) {
        lin.push_back('-');
    }
    for (int i=0 ; i<8 ; i++) {
        con.push_back('|');
        sin.push_back('|');
        if (i%2==0) {
            for (int j=0 ; j<n ; j++) {
                con.push_back(c);
                sin.push_back(' ');
            }
        } else {
            for (int j=0 ; j<n ; j++) {
                con.push_back(' ');
                sin.push_back(c);
            }
        }
    }
    con.push_back('|');
    sin.push_back('|');

    for (int i=0 ; i<8 ; i++) {
        cout << lin << endl;
        if (i%2==0) {
            for (int j=0 ; j<n ; j++) {
                cout << sin << endl;
            }
        } else {
            for (int j=0 ; j<n ; j++) {
                cout << con << endl;
            }
        }
    }
    cout << lin;

    
}
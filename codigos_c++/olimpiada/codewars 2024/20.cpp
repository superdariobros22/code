#include<bits/stdc++.h>
using namespace std;

int main() {
    vector<int> a, b, c;
    for (int i=0 ; i<15 ; i++) {
        int x;
        cin >> x;
        if (i<5) {
            a.push_back(x);
        } else if (i<10) {
            b.push_back(x);
        } else if (i<15) {
            c.push_back(x);
        }
    }
    for (int i=0 ; i<5 ; i++) {
        if (a[i]==b[i] || a[i]==c[i] || b[i]==c[i]) {
            a[i]=-1; b[i]=-1; c[i]=-1;
        }
    }
    if (a[1]==-1 && a[2]==-1 && a[3]==-1 && a[4]==-1 && a[0]==-1) {
        cout << '0';
    } else {
        int j=0;
        for (int i=0 ; i<5 ; i++) {
            if (j==0) {
                if (a[i]!=-1) {
                    cout << a[i];
                    j++;
                }
            } else {
                if (a[i]!=-1) {
                    cout << ' ' << a[i];
                }
            }
            
        } cout << endl; j=0;
        for (int i=0 ; i<5 ; i++) {
            if (j==0) {
                if (b[i]!=-1) {
                    cout << b[i];
                    j++;
                }
            } else {
                if (b[i]!=-1) {
                    cout << ' ' << b[i];
                }
            }
            
        } cout << endl; j=0;
        for (int i=0 ; i<5 ; i++) {
            if (j==0) {
                if (c[i]!=-1) {
                    cout << c[i];
                    j++;
                }
            } else {
                if (c[i]!=-1) {
                    cout << ' ' << c[i];
                }
            }
            
        }
    }
    
    
}
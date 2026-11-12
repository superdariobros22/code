#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    for (int i=0 ; i<t ; i++) {
        string x, y;
        vector<char> xx, yy;
        bool bx=false, by=false;
        cin >> x >> y;
        for (int j=0 ; j<x.length() ; j++) {
            xx.push_back(x[j]);
            if (x[j]=='a'||x[j]=='e'||x[j]=='i'||x[j]=='o'||x[j]=='u'||
            x[j]=='A'||x[j]=='E'||x[j]=='I'||x[j]=='O'||x[j]=='U') {
                bx=true;
                break;
            }
        }
        for (int j=0 ; j<y.length() ; j++) {
            yy.push_back(y[j]);
            if (y[j]=='a'||y[j]=='e'||y[j]=='i'||y[j]=='o'||y[j]=='u'||
            y[j]=='A'||y[j]=='E'||y[j]=='I'||y[j]=='O'||y[j]=='U') {
                by=true;
                break;
            }
        }
        if (bx==true) {
            for (int k=0 ; k<xx.size() ; k++) {
                cout << xx[k];
            }
        }
        if (by==true) {
            for (int k=0 ; k<yy.size() ; k++) {
                cout << yy[k];
            }
        }
        
        cout << endl;
    }
}
#include<bits/stdc++.h>
using namespace std;

int main() {
    string x, y;
    cin >> x >> y;
    string z=x;
    bool b=false;
    for (int i=0 ; i<x.length() ; i++) {
        z=x;
        for (int j=0 ; j<x.length()-1 ; j++) {
            x[j]=x[j+1];
        }
        x[x.length()-1]=z[0];
        if (x==y) {
            cout << "YES";
            b=true;
            break;
        }
    }
    if (b==false) cout << "NO";
}
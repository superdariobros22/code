#include<bits/stdc++.h>
using namespace std;

int main() {
    vector<int> vec;
    int x, y, z, total, d, resto;
    cin >> x >> y >> z;
    total=x+y+z+1;

    for (int i=0 ; i<z ; i++) {
        cout << ' ';
    } for (int i=0 ; i<=x ; i++) {
        cout << '_';
    } for (int i=0 ; i<y ; i++) {
        cout << ' ';
    } cout << endl;

    d=z-1;
    for (int i=0 ; i<z ; i++) {
        vec.push_back(d);
        d--;
    } d++;
    for (int i=0 ; i<y ; i++) {
        vec.push_back(d);
        d++;
    }

    for (int i=0 ; i<z+y ; i++) {

        resto=total-x-vec[i]-vec[(y+z)-i-1]-3;

        for (int j=0 ; j<vec[i] ; j++) {
            cout << ' ';
        }

        if (i<z) {
            cout << '/';
        } else {
            cout << '\\';
        }

        if (i==(z-1) || i==(y+z-1)) {
            for (int j=0 ; j<x ; j++) {
                cout << '_';
            }
        } else {
            for (int j=0 ; j<x ; j++) {
                cout << ' ';
            }
        }
        if (i<z) {
            cout << '/';
        } else {
            cout << '\\';
        }
        for (int j=0 ; j<resto ; j++) {
            cout << ' ';
        }
        if (i<y) {
            cout << '\\';
        } else {
            cout << '/';
        }
        for (int j=0 ; j<vec[y+z-i-1] ; j++) {
            cout << ' ';
        }
        cout << endl;
    }
        
    
}
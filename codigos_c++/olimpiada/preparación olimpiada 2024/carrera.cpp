#include<bits/stdc++.h>
using namespace std;
int main() {
    vector<string> vec;
    int a;
    cin >> a;
    for (int i=0 ; i<a ; i++) {
        int x1, y1, z1, x2, y2, z2, d=0;
        cin >> x1 >> y1 >> z1 >> x2 >> y2 >> z2;
        if (x2>x1 && y2>y1 && z2>z1) {
            d++;
        }
        if (x2>x1 && y2>y1 && z2>z1) {
            d++;
        }
        if (x2>x1 && y2>z1 && z2>y1) {
            d++;
        }
        if (x2>y1 && y2>x1 && z2>z1) {
            d++;
        }
        if (x2>y1 && y2>z1 && z2>x1) {
            d++;
        }
        if (x2>z1 && y2>y1 && z2>x1) {
            d++;
        }
        if (x2>z1 && y2>x1 && z2>y1) {
            d++;
        }
        if (d>0) {
            vec.push_back("SIRVE");
        } else {
            vec.push_back("NO SIRVE");
        }
    }
    for (int i=0 ; i<a ; i++) {
        cout << vec[i] << endl;
    }
}
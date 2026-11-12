#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    for (int i=0 ; i<t ; i++) {
        string x;
        cin >> x;
        for (int j=0 ; j<x.length()-1 ; j++) {
            cout << x[j] << " + ";
        } cout << x[x.length()-1] << endl;
    }
}
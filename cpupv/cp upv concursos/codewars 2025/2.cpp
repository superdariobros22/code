#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<string> v;
    for (int i=0 ; i<n ; i++) {
        int x;
        cin >> x;
        string s;
        cin.ignore();
        getline(cin, s);
        for (int j=0 ; j<x ; j++) {
            v.push_back(s);
        }
    }
    for (int i=0 ; i<v.size() ; i++) {
        cout << "Soy John M. y nunca " << v[i] << endl;
    }
}
#include<bits/stdc++.h>
using namespace std;

int main() {
    vector<int> v;
    int n, x;
    cin >> n;
    for (int i=0 ; i<n ; i++) {
        cin >> x;
        if (x%2==0) {
            v.push_back(x+1);
        } else {
            v.push_back(x-1);
        }
    } for (int i=0 ; i<n ; i++) {
        cout << v[i] << endl;
    }
}
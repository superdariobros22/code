#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> v;
    for (int i=0 ; i<n ; i++) {
        int x, y;
        cin >> x >> y;
        if (x%y==0) {
            v.push_back(x/y);
        } else {
            v.push_back(x/y+1);
        }
    }
    for (int i=0 ; i<n ; i++) {
        cout << v[i] << endl;
    }
}
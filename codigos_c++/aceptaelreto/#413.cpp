#include<bits/stdc++.h>
using namespace std;

int main() {
    vector<int> v, w;
    int n, a, b;
    cin >> n;
    for (int i=0 ; i<n ; i++) {
        cin >> a >> b;
        if ((a*b)%2==0) {
            v.push_back(a*b/2);
            w.push_back(a*b/2);
        } else {
            v.push_back(a*b/2+1);
            w.push_back(a*b/2);
        }
    }
    for (int i=0 ; i<n ; i++) {
        cout << v[i] << ' ' << w[i] << endl;
    }
}
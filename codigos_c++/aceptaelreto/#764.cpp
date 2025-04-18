#include<bits/stdc++.h>
using namespace std;

int main() {
    vector<int> v;
    while(true) {
        int n, c=0;
        cin >> n;
        if (n==0) {
            break;
        }
        for (int i=0 ; i<n ; i++) {
            int x, y;
            cin >> x >> y;
            c+=x;
            c-=y;
        }
        v.push_back(c);
    }
    for (size_t i=0 ; i<v.size() ; i++) {
        cout << v[i] << endl;
    }
}
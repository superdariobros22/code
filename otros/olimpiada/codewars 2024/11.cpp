#include<bits/stdc++.h>
using namespace std;

int main() {
    vector<int> v;
    int y;
    cin >> y;
    v.push_back(y);
    for (int i=0 ; i<7 ; i++) {
        int x;
        cin >> x;
        if (x>v[v.size()-1]) {
            v.push_back(x);
        }
        
    }
    for (size_t i=0 ; i<v.size()-1 ; i++) {
        cout << v[i] << ' ';
    }
    cout << v[v.size()-1];
}
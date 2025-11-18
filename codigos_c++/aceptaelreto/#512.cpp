#include<bits/stdc++.h>
using namespace std;

int main() {
    vector<int> v;
    int n;
    cin >> n;
    for (int i=0 ; i<n ; i++) {
        int a, b;
        cin >> a >> b;
        v.push_back(a*100/(a+b));
        
    }
    for (int i=0 ; i<n ; i++) {
        cout << v[i] << endl;
    }
}
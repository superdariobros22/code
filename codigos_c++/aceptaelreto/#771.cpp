#include<bits/stdc++.h>
using namespace std;

int main() {
    int n, x;
    cin >> n;
    vector<int> vec (n);
    for (int i=0 ; i<n ; i++) {
        cin >> x;
        vec[i]=x*4;
    } for (int i=0 ; i<n ; i++) {
        cout << vec[i] << endl;
    }
}
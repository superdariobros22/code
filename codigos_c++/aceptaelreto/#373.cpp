#include<bits/stdc++.h>
using namespace std;

int main() {
    vector<long long int> v;
    long long int n;
    cin >> n;

    for (long long int i=0 ; i<n ; i++) {
        long long int x;
        cin >> x;
        long long int y=6*pow(x,2)-12*x+8;
        v.push_back(y);
    }
    for (long long int i=0 ; i<n ; i++) {
        cout << v[i] << endl;
    }
}
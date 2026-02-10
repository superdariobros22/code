#include "bits/stdc++.h"
using namespace std;

int cc(int x) {
    int c=0;
    while(x!=1) {
        c++;
        if (x%2==0) x/=2;
        else x=3*x+1;
    }
    return c;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    vector<int> v, v1;
    int n, max=0;
    cin >> n;
    for (int i=0 ; i<n ; i++) {
        int x;
        cin >> x;
        v.push_back(x);
        v1.push_back(cc(x));
        if (cc(x)>max) max=cc(x);
    }

    for (int i=0 ; i<n ; i++) {
        if (v1[i]==max) cout << v[i] << ' ';
    }
    
    return 0;
}
#include<bits/stdc++.h>
using namespace std;

int main() {
    long long int t;
    cin >> t;
    for (long long int i=0 ; i<t ; i++) {
        long long int n, m, d=1;
        cin >> n  >> m;
        for (long long int j=0 ; j<n ; j++) {
            long long int x;
            cin >> x;
            if (x==0) d=d*m;
        }
        
            cout << d%1000000007 << endl;
        
    }
}
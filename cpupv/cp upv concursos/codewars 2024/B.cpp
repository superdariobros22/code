#include "bits/stdc++.h"

using namespace std;

#define all(a) a.begin(), a.end()
#define ll long long
#define db double
#define mp make_pair
#define pb push_back
#define f first
#define s second
#define pii pair<int, int>

const ll MOD = 1e9 + 7;
const ll MAX = 1e9;

void tri(int n, int k) {
    if (n!=0) {
        cout << k;
        tri(n-1, k-1);
        cout << k;
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
    cin >> n;
    for (int i=0 ; i<2*n ; i++) {
        for (int j=0 ; j<2*n-i-1 ; j++) {
            cout << ' ';
        }
        if (i<n) {
            for (int j=n ; j>=n-i ; j--) {
                cout << j;
            }
            for (int j=n-i+1 ; j<=n ; j++) {
                cout << j;
            }
        } else {
            for (int j=n ; j>i-n ; j--) {
                cout << j;
            }
            for (int j=0 ; j<1+(i-n)*4 ; j++) {
                cout << i-n+1;
            }
            for (int j=i-n+1 ; j<=n ; j++) {
                cout << j;
            }
        }
        cout << endl;
    }
    
    return 0;
}
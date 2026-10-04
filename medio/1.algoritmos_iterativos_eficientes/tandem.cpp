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

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    ll n, m;
    while(true) {
        cin >> n >> m;
        if (n==0&&m==0) break;
        vector<ll> v(n);
        for (ll i=0 ; i<n ; i++) {
            cin >> v[i];
        }
        ll t=0, i=0, j=n-1;
        sort(all(v));
        while(i!=j) {
            if (v[i]+v[j]<=m) {
                t+=j-i;
                i++;
            } else {
                j--;
            }
        }

        cout << t << endl;
    }
    
    return 0;
}
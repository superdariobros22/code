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
    
    vector<ll int> v;
    ll int n, x, c=0;
    cin >> n >> x;
    for (ll int i=0 ; i<x ; i++) {
        ll int k;
        cin >> k;
        v.pb(k);
    }
    sort(all(v));
    for (ll int i=0 ; i<x ; i++) {
        if (i<x-1) c+=v[x-i-1]*(i+1);
        else c+=v[x-i-1]*i;
    }
    cout << c;
    
    return 0;
}
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

void buh (ll n, ll k, vector<ll> &v) {
    ll i=v[n-1]+1, j=v[n]-v[n-1];
    if (k==i) cout << 'B' << endl;
    else if (k==j) cout << 'H' << endl;
    else if (k>i&&k<j) cout << 'U' << endl;
    else if (k<i) buh(n-1, k, v);
    else if (k>j) buh(n-1, k-v[n-1]-2-n, v);
    
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    vector<ll> v(65, 0);
    v[1]=3;
    ll x=3;
    for (int i=2 ; i<65 ; i++) {
        ll y=x;
        x=2*y+2+i;
        v[i]=x;
    }

    ll n, k;
    while(cin >> n) {
        cin >> k;
        buh(n, k, v);
    }
    
    return 0;
}
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
 
    vector<ll int> vv;
    ll int tt, n, x;
    cin >> tt;
    for (int i=0 ; i<tt ; i++) {
        ll int k=0;
        cin >> n;
        vector<ll int> v;
        for (int j=0 ; j<n ; j++) {
            cin >> x;
            v.push_back(x);
        }
        sort(v.begin(), v.end());
        for (int j=1 ; j<n ; j++) {
            k+=v[j]-v[j-1]-1;
        }
        k+=v[0];
        vv.pb(k);
    }
    for (int i=0 ; i<tt ; i++) {
        cout << vv[i] << endl;
    }
}
 
 
 
 
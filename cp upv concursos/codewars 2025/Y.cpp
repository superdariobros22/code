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

    vector<ll int> v, w;
    ll int n, q, x, a, b, c;
    cin >> n >> q;
    for (ll int i=0 ; i<n ; i++) {
        cin >> x;
        v.push_back(x);
    }
    for (ll int i=0 ; i<q ; i++) {
        cin >> a >> b >> c;
        if (a==1) v[b-1]=c;
        else {
            ll int k=0;
            for (ll int j=b-1 ; j<c ; j++) {
                k+=v[j];
            }
            w.push_back(k);
        }
    }
    for (size_t i=0 ; i<w.size() ; i++) {
        cout << w[i] << endl;
    }
    
    return 0;
}
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
    
    int n, m;
    vector<ll> w;

    while(true) {
        cin >> n >> m;
        if (n==0&&m==0) break;
        ll suma=0, max=0, p=n-m+1;
        vector<int> v(n);
        for (int i=0 ; i<n ; i++) {
            cin >> v[i];
            if (i>=n-m) suma+=v[i];
        }
        max=suma;
        for (int i=n-m-1 ; i>=0 ; i--) {
            suma+=v[i];
            suma-=v[i+m];
            if (suma>max) {
                max=suma;
                p=i+1;
            }
        }
        w.pb(p);
        w.pb(max);
    }
    for (int i=0 ; i<w.size() ; i+=2) {
        cout << w[i] << ' ' << w[i+1] << endl;
    }
    
    return 0;
}
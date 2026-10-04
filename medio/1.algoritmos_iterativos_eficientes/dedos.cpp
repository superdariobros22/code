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
    vector<int> w;
    while(true) {

        cin >> n >> m;
        if (n==0&&m==0) break;

        int max=0, i1=0, i2=0;
        vector<int> v(n);

        for (int i=0 ; i<n ; i++) {
            cin >> v[i];
        }

        while(i2<n) {
            if (v[i2]-v[i1]<m) {
                if (i2-i1+1>max) max=i2-i1+1;
                i2++;
            } else {
                i1++;
            }
        }
        w.pb(max);
    }
    for (int i=0 ; i<w.size() ; i++) {
        cout << w[i] << endl;
    }
    
    
    return 0;
}
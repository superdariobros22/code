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
    
    int n;
    vector<int> w;
    while(true) {
        cin >> n;
        if (n==0) break;
        vector<int> v(n);
        for (int i=0 ; i<n ; i++) {
            cin >> v[i];
        }
        int max=v[n-1], total=1;
        for (int i=n-2 ; i>=0 ; i--) {
            if (v[i]>max) {
                max=v[i];
                total++;
            }
        }
        w.pb(total);
    }
    for (int i=0 ; i<w.size() ; i++) {
        cout << w[i] << endl;
    }
    return 0;
}
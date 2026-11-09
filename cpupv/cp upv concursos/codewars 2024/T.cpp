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
    
    int t;
    cin >> t;
    for (int i=0 ; i<t ; i++) {
        int n, x;
        cin >> n >> x;
        vector<int> v (n);
        for (int i=0 ; i<n ; i++) {
            cin >> v[i];
        }
        int max=v[0], min=v[0], cambios=0;
        for (int i=0 ; i<n ; i++) {
            if (v[i]>max) max=v[i];
            if (v[i]<min) min=v[i];
            if (max-min>2*x) {
                cambios++;
                max=v[i];
                min=v[i];
            }
        }
        cout << cambios << endl;
    }
    
    return 0;
}
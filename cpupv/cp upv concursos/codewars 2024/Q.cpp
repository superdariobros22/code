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
        int n, k;
        cin >> n >> k;
        vector<int> v(n);
        for (int j=0 ; j<n ; j++) {
            cin >> v[j];
        }
        int p=0, u=n-1, bajas=0;
        for (int j=0 ; j<k ; j++) {
            if (j%2==0) {
                v[p]--;
                if (v[p]==0) {
                    p++;
                    bajas++;
                }
            } else {
                v[u]--;
                if (v[u]==0) {
                    u--;
                    bajas++;
                }
            }
        }
        cout << bajas << endl;
    }
    
    return 0;
}
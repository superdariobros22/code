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
    
    int p, n;
    vector<int> w;
    while(true) {
        cin >> p >> n;
        if (p==0&&n==0) break;
        vector<int> v(n);
        for (int i=0 ; i<n ; i++) {
            cin >> v[i];
        }
        int i=0, j=0, vagones=n+1, pos=-1, suma=v[0], cero=0;
        if (v[0]==0) cero=1;
        while (j<n&&i<=j) {
            if (suma>=p) {
                if (cero==0&&(j-i+1)<vagones) {
                    vagones=j-i+1;
                    pos=i+1;
                }
                if (v[i]==0) cero--;
                suma-=v[i];
                i++;
            } else {
                j++;
                if (j<n) {
                    suma+=v[j];
                    if (v[j]==0) cero++;
                }

            }
        }
        w.pb(vagones);
        w.pb(pos);
    }
    for (int i=0 ; i<w.size() ; i+=2) {
        if (w[i+1]==-1) cout << "NO ENTRAN" << endl;
        else cout << w[i] << ' ' << w[i+1] << endl;
    }
    
    return 0;
}
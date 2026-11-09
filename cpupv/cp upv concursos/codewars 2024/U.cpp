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
    
    int n, m, q;
    cin >> n >> m;
    vector<string> v(n);
    for (int i=0 ; i<n ; i++) {
        cin >> v[i];
    }
    cin >> q;
    for (int i=0 ; i<q ; i++) {
        int x1, y1, x2, y2, arboles=0;
        cin >> x1 >> y1 >> x2 >> y2;
        for (int j=x1 ; j<=x2 ; j++) {
            for (int k=y1 ; k<=y2 ; k++) {
                if (v[j-1][k-1]=='#') arboles++;
            }
        }
        cout << arboles << endl;
    }
    
    return 0;
}
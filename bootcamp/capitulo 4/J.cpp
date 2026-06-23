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
        int n, m;
        float e;
        cin >> n >> m >> e;
        vector<vector<float>> v (n, vector<float> (m));
        for (int j=0 ; j<n ; j++) {
            for (int k=0 ; k<m ; k++) {
                float x;
                cin >> x;
                if (abs(x)<=e) v[j][k]=0;
                else v[j][k]=x;
            }
        }
        for (int j=0 ; j<n ; j++) {
            for (int k=0 ; k<m ; k++) {
                cout << setprecision(6) << fixed << v[j][k] << ' ';
            }
            cout << endl;
        }
    }
    
    return 0;
}
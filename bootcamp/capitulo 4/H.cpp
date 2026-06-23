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
    
    int n, m, max=0;
    cin >> n >> m;
    vector<vector<int>> v (n, vector<int> (m));

    for (int i=0 ; i<n ; i++) {
        int c=0;
        for (int j=0 ; j<m ; j++) {
            cin >> v[i][j];
            c+=v[i][j];
        }
        if (c>max) max=c;
    }
    for (int i=0 ; i<m ; i++) {
        int c=0;
        for (int j=0 ; j<n ; j++) {
            c+=v[j][i];
        }
        if (c>max) max=c;
    }
    cout << max;

    return 0;
}
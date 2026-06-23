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
    
    int t, n, m;
    cin >> t;
    for (int i=0 ; i<t ; i++) {
        cin >> n >> m;
        vector<vector<int>> v(n,vector<int> (m));
        for (int j=0 ; j<n ; j++) {
            for (int k=0 ; k<m ; k++) {
                cin >> v[j][k];
            }
        }
        
    } 
    
    return 0;
}
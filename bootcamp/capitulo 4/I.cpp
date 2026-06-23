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
    
    int n, m, c=1;
    cin >> n >> m;
    vector<string> v (n);
    for (int i=0 ; i<n ; i++) {
        cin >> v[i];
    }
    for (int i=0 ; i<n-1 ; i++) {
        for (int j=0 ; j<m-1 ; j++) {
            if (v[i][j]==v[i+1][j]&&v[i][j]==v[i+1][j+1]&&v[i][j]==v[i][j+1]) {
                c=0;
                break;
            }
        }
    }
    if (c==0) cout << "NO ORIGINAL";
    else cout << "ORIGINAL";
    return 0;
}
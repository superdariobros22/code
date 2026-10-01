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
    cin >> n >> m;
    vector<string> v (n);

    for (int i=0 ; i<n ; i++) {
        cin >> v[i];
    }
    for (int i=0 ; i<n ; i++) {
        for (int j=0 ; j<m ; j++) {
            int c=0;
            if (v[i][j]=='*') cout << 'F';
            else {
                if (i-1>=0) {
                    if (v[i-1][j]=='*') c++;
                    if (j-1>=0&&v[i-1][j-1]=='*') c++;
                    if (j+1<m&&v[i-1][j+1]=='*') c++;
                }
                if (i+1<n) {
                    if (v[i+1][j]=='*') c++;
                    if (j-1>=0&&v[i+1][j-1]=='*') c++;
                    if (j+1<m&&v[i+1][j+1]=='*') c++;
                }
                if (j-1>=0&&v[i][j-1]=='*') c++;
                if (j+1<m&&v[i][j+1]=='*') c++;
                if (c==0) cout << ' ';
                else cout << c;
            }
        }
        cout << endl;
    }
    
    return 0;
}
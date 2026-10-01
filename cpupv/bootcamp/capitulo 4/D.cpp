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
    
    int a, b;
    cin >> a >> b;
    vector<string> v;
    vector<vector<char>> w (a, vector<char> (b, '.'));
    for (int i=0 ; i<a ; i++) {
        string x;
        cin >> x;
        v.pb(x);
    }
    for (int i=0 ; i<a ; i++) {
        for (int j=0 ; j<b ; j++) {
            if (v[i][j]=='#') {
                for (int k=0 ; k<b ; k++) {
                    w[i][k]='#';
                }
                for (int k=0 ; k<a ; k++) {
                    w[k][j]='#';
                }
            }
        }
    }
    for (int i=0 ; i<a ; i++) {
        for (int j=0 ; j<b ; j++) {
            cout << w[i][j];
        }
        cout << endl;
    }
    
    return 0;
}
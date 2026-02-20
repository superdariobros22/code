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
    
    int n;
    cin >> n;
    vector<vector<int>> v(n);
    for (int i=0 ; i<n ; i++) {
        int t;
        string s;
        cin >> t >> s;
        for (int j=0 ; j<t ; j++) {
            string s2=s;
            int k=0, i1=j;
            while(i1>=0&&i1<t) {
                k++;
                if (s2[i1]=='<') {
                    s2[i1]='>';
                    i1--;
                }
                else {
                    s2[i1]='<';
                    i1++;
                }
            }
            v[i].pb(k);
        }
    }
    for (int i=0 ; i<n ; i++) {
        for (size_t j=0 ; j<v[i].size() ; j++) {
            cout << v[i][j] << ' ';
        }
        cout << endl;
    }
    
    return 0;
}
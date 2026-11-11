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
    while(cin >> n) {
        vector<vector<int>> v;
        for (int i=0 ; i<n ; i++) {
            vector<int> x;
            cin >> x[0];
            if (x[0]==0) {
                string s;
                cin >> s;
                if (s=="FELIZ") x[1]=1;
                else x[1]=0;
            } else {
                
            }
        }
    }
    
    return 0;
}
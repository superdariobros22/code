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
    
    int l;
    vector<int> v;
    while(cin >> l) {
        int t=0, i=0;
        while(l>=1) {
            t+=(4*l*pow(4,i));
            i++;
            l/=2;
        }
        v.pb(t);
    }
    for (size_t i=0 ; i<v.size() ; i++) {
        cout << v[i] << endl;
    }

    
    return 0;
}
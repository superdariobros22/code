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
        ll n, max=0;
        cin >> n;
        for (int j=0 ; j<n ; j++) {
            ll x, y, z;
            char c;
            cin >> x >> c >> y;
            switch(c) {
                case '+':
                    z=x+y;
                    break;
                case '-':
                    z=x-y;
                    break;
                case '*':
                    z=x*y;
                    break;
            }
            if (z>1) max+=z;
            else max+=1;
        }
        cout << max << endl;
    }
    
    return 0;
}
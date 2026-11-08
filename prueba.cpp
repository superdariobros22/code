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
    ll n=3;
    for (int i=2 ; i<=61 ; i++) {
        ll m=n;
        n=2*m+2+i;
        cout << log2(n) << endl;
    }
    
    return 0;
}
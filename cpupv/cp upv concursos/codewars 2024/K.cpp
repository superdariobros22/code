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
    vector<int> v(n);
    for (int i=0 ; i<n ; i++) {
        cin >> v[i];
    }
    sort(all(v));
    ll vicente=0, fermin=0;
    for (int i=0 ; i<n ; i++) {
        if (i%2==0) vicente+=v[i];
        else fermin+=v[i];
    }
    if (vicente<fermin) cout << "Vicente";
    else if (fermin<vicente) cout << "Fermin";
    else cout << "Empate";
    
    return 0;
}
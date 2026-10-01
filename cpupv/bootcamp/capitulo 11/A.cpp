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
    
    int tt, r, cx, cy, px, py;
    vector<string> v;
    cin >> tt;
    for (int i=0 ; i<tt ; i++) {
        cin >> r >> cx >> cy >> px >> py;
        if (sqrt(pow(px-cx,2)+pow(py-cy,2))>r) v.pb("NO");
        else v.pb("SI");
    }
    for (int i=0 ; i<tt ; i++) {
        cout << v[i] << endl;
    }
    
    return 0;
}
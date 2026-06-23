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
    
    int n, w, x, t=0;
    vector<int> v;
    cin >> n >> w;
    for (int i=0 ; i<n ; i++) {
        cin >> x;
        v.push_back(x);
    }
    sort(all(v));
    while(v.size()>1) {
        t++;
        if (w-v[v.size()-1]>=v[0]) v.erase(v.begin());
        v.pop_back();
    }
    if (v.size()>0) t++;
    cout << t;

    
    return 0;
}
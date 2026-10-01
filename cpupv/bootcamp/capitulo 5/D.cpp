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
    vector<pair<int,int>> v (n);

    for (int i=0 ; i<n ; i++) {
        cin >> v[i].first >> v[i].second;
    }
    sort(all(v));

    int i1=n-1, i2=n-1;
    
    while(i1>=0) {
        if (i1!=0) {
            while(v[i1].first==v[i1-1].first) {
                i1--;
            }
        }
        for (int i=i1 ; i<=i2 ; i++) {
            cout << v[i].first << ' ' << v[i].second << endl;
        }
        i1--;
        i2=i1;
    }
    
    return 0;
}
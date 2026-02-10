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
    
    int n, c=0, i1, i2;
    vector<int> v;
    cin >> n;
    i1=0;
    i2=n-1;
    for (int i=0 ; i<n ; i++) {
        int x;
        cin >> x;
        v.push_back(x);
    }
    for (int i=0 ; i<n ; i++) {
        if (v[i1]<v[i2]) {
            c+=(i+1)*v[i1];
            i1++;
        } else {
            c+=(i+1)*v[i2];
            i2--;
        }
    }
    cout << c;
    
    return 0;
}
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
    
    int n, k;
    cin >> n >> k;
    vector<int> v(n+1);
    for (int i=0 ; i<n ; i++) {
        cin >> v[i];
    }
    int i=0, j=0, suma=v[0], max=0;
    while(i<=j&&i<n&&j<n) {
        if (suma<=k) {
            if (j-i+1>max) max=j-i+1;
            j++;
            suma+=v[j];
        } else {
            i++;
            suma-=v[i-1];
            if (i>j) {
                j++;
                suma+=v[j];
            }
        }
    }
    cout << max;
    
    return 0;
}
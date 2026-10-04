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
    while(true) {

        cin >> n;
        if (n==0) break;
        vector<int> v(n);

        for (int i=0 ; i<n ; i++) {
            cin >> v[i];
        }

        ll suma=v[n-1], total=0;

        for (int i=n-2 ; i>=0 ; i--) {
            total+=v[i]*suma;
            suma+=v[i];
        }
        
        cout << total << endl;

    }
    
    return 0;
}
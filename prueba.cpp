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
        int n, b=0, total=0;
        cin >> n;
        for (int j=0 ; j<n ; j++) {
            int x;
            cin >> x;
            if (x>=2) b=1;
            total+=x;
        }
        if (b==0) cout << -1 << endl;
        else cout << total-1 << endl;
    }
    
    return 0;
}
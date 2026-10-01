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
    vector<int> v(n), w(n);
    for (int i=0 ; i<n ; i++) {
        int x;
        cin >> x;
        if (i%2==0) v[i]+=x;
        else w[i]+=x;
    }
    for (int i=0 ; i<n ; i++) {
        int x;
        cin >> x;
        if (i%2==0) w[i]+=x;
        else v[i]+=x;
    }
    for (int i=0 ; i<n ; i++) {
        cout << v[i] << ' ';
    }
    cout << endl;
    for (int i=0 ; i<n ; i++) {
        cout << w[i] << ' ';
    }
    
    return 0;
}
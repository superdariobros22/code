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
        int x, y, c=0;
        cin >> x >> y;
        for (int j=0 ; j<x ; j++) {
            int w;
            cin >> w;
            if (w==y) c=1;
        }
        if (c==1) cout << "YES";
        else cout << "NO";
        cout << endl;
    }
    
    return 0;
}
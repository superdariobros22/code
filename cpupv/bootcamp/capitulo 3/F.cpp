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
    for (int i=0 ; i<n ; i++) {
        int a, b, c, d=0;
        cin >> a >> b >> c;
        for (int j=0 ; j<c ; j++) {
            int x;
            cin >> x;
            d+=x;
        }
        if (c>a) cout << "No cabemos" << endl;
        else if (d>a*b) cout << "Nos quedamos atrapados" << endl;
        else cout << "Todo bien" << endl;
    }
    
    return 0;
}
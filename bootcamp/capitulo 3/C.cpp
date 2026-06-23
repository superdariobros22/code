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
#define pi 3.141592

const ll MOD = 1e9 + 7;
const ll MAX = 1e9;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n, x;
    cin >> n;
    double a, b;
    for (int i=0 ; i<n ; i++) {
        cin >> x;
        switch(x) {
            case 1: cin >> a;
            cout << pi*a*a;
            break;
            case 2: cin >> a;
            cout << a*a;
            break;
            case 3: cin >> a >> b;
            cout << a*b;
            break;
            default: cin >> a >> b;
            cout << a*b/2;
            break;
        }
        cout << endl;
    }
    
    return 0;
}
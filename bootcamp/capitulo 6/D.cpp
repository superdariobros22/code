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

void flecha(int n, int k) {
    for (int i=0 ; i<k ; i++) {
        cout << '#';
    }
    cout << endl;
    if (k<n) {
        flecha(n,k+1);
        for (int i=0 ; i<k ; i++) {
            cout << '#';
        }
        cout << endl;
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
    cin >> n;
    flecha(n, 1);
    
    return 0;
}
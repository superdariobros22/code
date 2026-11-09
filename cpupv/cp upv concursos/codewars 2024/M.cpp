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
        string x;
        cin >> x;
        char anterior=x[0];
        int veces=1;
        for (int i=1 ; i<x.length() ; i++) {
            if (x[i]==anterior) {
                veces++;
            } else {
                if (veces!=1) cout << veces;
                cout << anterior;
                veces=1;
                anterior=x[i];

            }
        }
        if (veces!=1) cout << veces;
        cout << anterior << endl;
    }
    
    return 0;
}
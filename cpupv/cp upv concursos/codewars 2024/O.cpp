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

void perm(string x, string y, int n) {
    for (int i=0 ; i<n ; i++) {
        if (y[i]!='0') {
            cout << x[i];
            y[i]='0';
            bool b=true;
            for (int j=0 ; j<n ; j++) {
                if (y[j]!='0') {
                    perm(x, y, n);
                    b=false;
                }
                if (b==true) cout << endl;
            }
            
        }
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    string x, y;
    cin >> x;
    int n=x.length();
    y=x;
    perm(x, y, n);
    
    return 0;
}
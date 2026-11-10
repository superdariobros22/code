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
   for (int i=0 ; i<x.length() ; i++) {
    size_t tt=y.find(x[i]);
    if (tt==string::npos) {
            y[n-1]=x[i];
            if (n==x.length()) {
                cout << y << endl;
            } else {
                perm(x, y, n+1);
            }
        }
   }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    string x, y;
    cin >> x;
    y=x;
    for (int i=0 ; i<x.length() ; i++) {
        y[i]=' ';
    }
    perm(x, y, 1);
    
    return 0;
}
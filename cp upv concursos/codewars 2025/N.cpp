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
    
    vector<string> v;
    int n;
    cin >> n;

    for (int i=0 ; i<n ; i++) {
        string x, y;
        cin >> x >> y;
        if (x.find(y)!=string::npos) {
            v.pb(y);
        } else {
            string z="";
            int i1=0;
            for (int j=0 ; j<x.length() ; j++) {
                if (i1==0) {
                    if (x[j]==y[i1]) i1++;
                } else {
                    if (x[j]==y[i1]) {
                        i1++;
                        if (i1==y.length()) break;
                    }
                    else z.pb(x[j]);
                }
            }
            if (i1==y.length()) v.pb(z);
            else v.pb("ERROR");
        }

    }

    for (int i=0 ; i<n ; i++) {
        cout << v[i] << endl;
    }
    
    return 0;
}
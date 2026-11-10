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

void perm(string x, string y, int n, string real, vector<string> &v) {
   for (int i=0 ; i<x.length() ; i++) {
    size_t tt=y.find(x[i]);
    if (tt==string::npos) {
            y[n-1]=x[i];
            if (n==x.length()) {
                string yy=y;
                for (int j=0 ; j<y.length() ; j++) {
                    yy[j]=real[int(y[j])-33];
                }
                auto it=find(all(v),yy);
                if(it==v.end()) {
                    cout << yy << endl;
                    v.pb(yy);
                }
            } else {
                perm(x, y, n+1, real, v);
            }
        }
   }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    string x, y, xx;
    vector<string> v;
    cin >> x;
    y=x;
    xx=x;
    for (int i=0 ; i<x.length() ; i++) {
        y[i]=' ';
        xx[i]=char(i+33);
    }

    perm(xx, y, 1, x, v);
    
    return 0;
}
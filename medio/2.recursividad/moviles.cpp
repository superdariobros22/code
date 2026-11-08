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

int suma(vector<vector<int>> v, int &i) {
    int pi=v[i][0], di=v[i][1], pd=v[i][2], dd=v[i][3];
    if (pi==0) pi=suma(v,++i);
    if (pd==0) pd=suma(v,++i);
    if (pi*di==pd*dd&&pi>0&&pd>0) return pi+pd;
    else return -1;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
    cin >> n;
    for (int i=0 ; i<n ; i++) {
        int ceros=1;
        vector<vector<int>> vv;
        do {
            vector<int> v (4);
            cin >> v[0] >> v[1] >> v[2] >> v[3];
            if (v[0]==0) ceros++;
            if (v[2]==0) ceros++;
            ceros--;
            vv.pb(v);
        } while(ceros!=0);
        int j=0, x;
        x=suma(vv,j);
        if (x==-1) cout << "NO" << endl;
        else cout << "SI" << endl;

    }
    
    return 0;
}
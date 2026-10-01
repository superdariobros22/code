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
    string x;
    bool nada=true, dif=false;
    cin >> n;

    vector<string> v (n);

    for (int i=0 ; i<n ; i++) {
        cin >> v[i];
        for (int j=0 ; j<n ; j++) {
            if (v[i][j]=='#') nada=false;
        }
    }
    for (int i=0 ; i<n ; i++) {
        cin >> x;
        for (int j=0 ; j<n ; j++) {
            if (x[j]!=v[i][j]) dif=true;
            
        }
    }
    if (nada==true) cout << "NO LLEVABA MERMELADA";
    else if (dif==true) cout << "TRAGEDIA";
    else cout << "HA HABIDO SUERTE";
    
    return 0;
}
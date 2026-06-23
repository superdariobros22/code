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
    
    int n, m=-1;
    while(cin >> n) {
        if (m!=-1) {
            if (n<m) cout << "B";
            else if (n>m) cout << "S";
            else cout << "I";
        }
        m=n;
    }
    
    return 0;
}
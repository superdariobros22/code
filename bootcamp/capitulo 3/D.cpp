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
    
    int n, p;
    cin >> n >> p;

    for (int i=0 ; i<p ; i++) {
        int x;
        cin >> x;
        if (abs(x-n)==0) cout << "1p ";
        else if (abs(x-n)<=5) cout << "0.5p ";
        else if (abs(x-n)<=10) cout << "0.25p ";
        else cout << "0p ";
    }
    
    return 0;
}
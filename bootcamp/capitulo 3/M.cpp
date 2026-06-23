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
    
    int a, b, c=0;
    cin >> a >> b;
    for (int i=0 ; i<a ; i++) {
        for (int j=0 ; j<b ; j++) {
            char x, y;
            cin >> x >> y;
            if (x=='#'||y=='#') c++;
        }
    }
    cout << c;
    
    return 0;
}
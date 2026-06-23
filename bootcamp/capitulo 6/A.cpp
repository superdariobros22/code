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

int cuenta (int n) {
    if (n>=1) {
        cout << n << endl;
        n--;
        return cuenta(n);
    } else {
        return 0;
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
    cin >> n;
    cuenta(n);
    
    return 0;
}
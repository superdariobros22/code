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
    
    while(true) {
        int a, b;
        cin >> a >> b;
        if (a==0||b==0) break;
        vector<int> v(a);
        int suma=0, max=0;
        for (int i=0 ; i<a ; i++) {
            cin >> v[i];
            if (i<b) suma+=v[i];
            if (v[i]>max) max=v[i];
        }
        for (int i=)
    }
    
    return 0;
}
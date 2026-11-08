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

void trans(string &x) {
    string y=x;
    for (int i=0 ; i<x.length() ; i++) {
        x[i]=y[x.length()-i-1];
    }

}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    string x;
    vector<string> v;
    while(cin >> x) {
        trans(x);
        v.pb(x);
    }
    for (int i=0 ; i<v.size() ; i++) {
        cout << v[i] << ' ';
    }
    
    return 0;
}
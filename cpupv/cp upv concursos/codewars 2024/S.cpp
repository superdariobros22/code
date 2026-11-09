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
    cin >> n;
    string x;
    cin >> x;
    vector<char> v;
    map<char,int> map;
    for (int i=0 ; i<n ; i++) {
        if (int(x[i])>=65 && int(x[i])<=90 || int(x[i])>=97 && int(x[i])<=122) {
            if (int(x[i])>=97 && int(x[i])<=122) x[i]=char(int(x[i])-32);
            auto it = map.find(x[i]);
            if (it==map.end()) {
                map[x[i]]=1;
                v.pb(x[i]);
            } 
            else map[x[i]]++;
        }
    }
    for (int i=0 ; i<v.size() ; i++) {
        cout << v[i] << ": " << map[v[i]] << endl;
    }
    
    return 0;
}
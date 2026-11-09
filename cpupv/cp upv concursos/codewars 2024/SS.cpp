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
    while(cin >> n) {
        string x;
        cin >> x;
        map<char,int> map;
        for (int i=0 ; i<n ; i++) {
            auto it = map.find(x[i]);
            if (it==map.end()) {
                map[x[i]]=1;
            } 
            else map[x[i]]++;
        }
        char letra, LETRA;
        int max=0, min=1000001;
        for (int i=0 ; i<n ; i++) {
            if (map[x[i]]>max) {
                max=map[x[i]];
                LETRA=x[i];
            }
            if (map[x[i]]<min) {
                min=map[x[i]];
                letra=x[i];
            }
        }
        cout << LETRA << ": " << max << endl << letra << ": " << min << endl;
    }
    
    return 0;
}
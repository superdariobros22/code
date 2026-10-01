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

    string s;
    
    while(getline(cin, s)) {
        if (s.length()%2==0) {
            for (int i=s.length()-1 ; i>=0 ; i--) {
                cout << s[i];
            }
        } else {
            cout << s;
        }
        cout << endl;
    }
    
    return 0;
}
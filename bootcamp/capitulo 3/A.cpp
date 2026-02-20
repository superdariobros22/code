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
    int n;
    cin >> s >> n;
    cout << "Vienen a pasear: ";
    if (s[0]=='S'&&n>=20) cout << "Adrian ";
    if (s[0]=='S'||n<15) cout << "Barbara ";
    if (s[0]=='S'||s[0]=='N') cout << "Carmen ";
    if (s[0]!='T') cout << "Dario";
    
    return 0;
}
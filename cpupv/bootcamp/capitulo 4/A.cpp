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
    cin.ignore();
    for (int i=0 ; i<n ; i++) {
        string s;
        int c=0, d=0;
        getline(cin, s);
        for (size_t j=0 ; j<s.length() ; j++) {
            if (s[j]=='a'||s[j]=='e'||s[j]=='i'||s[j]=='o'||s[j]=='u') d++;
            else if (s[j]==' ') c++;
        }
        cout << d << ' ' << s.length()-c << endl;
    }
    
    return 0;
}
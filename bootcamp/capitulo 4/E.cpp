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
        int c=0;
        string s, s1="*", s2="*";
        getline(cin, s);
        for (size_t j=0 ; j<s.length() ; j++) {
            if (s[j]==' ') {
                c++;
                s1+="*";
                s2+="*";
            } else {
                s1+="***";
                s2+=" ";
                s2.pb(s[j]);
                s2+=" ";
            }
            s1+="*";
            s2+="*";
        }
        cout << s1 << endl << s2 << endl << s1 << endl;
    }
    
    return 0;
}
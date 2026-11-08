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
        bool ord=true;
        int p=0, l=0, c=0;
        for (int i=0 ; i<s.length() ; i++) {
            switch(s[i]) {
                case '(': p++;
                break;
                case ')': p--;
                break;
                case '[': c++;
                break;
                case ']': c--;
                break;
                case '{': l++;
                break;
                case '}': l--;
                break;
            }
            if (p<0||c<0||l<0) ord=false;
        }
        if (ord==true) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    
    return 0;
}
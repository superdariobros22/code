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

    for (int i=0 ; i<n ; i++) {
        vector<string> v (8);
        for (int j=0 ; j<8 ; j++) {
            cin >> v[j];
        }
        for (int j=0 ; j<8 ; j++) {
            for (int k=0 ; k<8 ; k++) {
                if (j%2==0) {
                    if (k%2==0) {
                        if (v[j][k]=='W') cout << "W";
                        else cout << "X";
                    } else {
                        if (v[j][k]=='B') cout << "B";
                        else cout << "X";
                    }
                } else {
                    if (k%2==0) {
                        if (v[j][k]=='B') cout << "B";
                        else cout << "X";
                    } else {
                        if (v[j][k]=='W') cout << "W";
                        else cout << "X";
                    }
                }
            }
            cout << endl;
        }
    }

    return 0;
}
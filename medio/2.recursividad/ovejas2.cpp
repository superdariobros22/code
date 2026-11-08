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

void cambio (vector<string> &foto, int i, int j, int w, int h) {
    if (foto[i][j]=='.') foto[i][j]='X';
    vector<int> v1 = {1, 0, -1, 0};
    vector<int> v2 = {0, 1, 0, -1};
    for (int k=0 ; k<4 ; k++) {
        if (i+v1[k]>=0&&i+v1[k]<h&&j+v2[k]>=0&&j+v2[k]<w) {
            if (foto[i+v1[k]][j+v2[k]]=='.') {
                cambio(foto, i+v1[k], j+v2[k], w, h);
            }
        }
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int w, h;
    while(cin >> w) {
        cin >> h;
        vector<string> foto (h);
        for (int i=0 ; i<h ; i++) {
            cin >> foto[i];
        }
        int puntos=0, puntos2=0;
        for (int i=0 ; i<h ; i++) {
            for (int j=0 ; j<w ; j++) {
                if (foto[i][j]=='.') puntos++;
            }
        }
        cambio(foto, 0, 0, w, h);
        for (int i=0 ; i<h ; i++) {
            for (int j=0 ; j<w ; j++) {
                if (foto[i][j]=='.') puntos2++;
            }
        }
        if (puntos2!=0) cout << "SI" << endl;
        else cout << "NO" << endl;
    }
    
    return 0;
}
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

int laberinto(int H, int W, vector<string>& mapa, vector<vector<int>>& visitados, int n, int h, int w) {
    visitados[H][W]=1;
    if (mapa[H][W]=='S') return n;
    else {
        vector<int> v1 ={1, 0, -1, 0};
        vector<int> v2 ={0, 1, 0, -1};
        bool b=false;
        for (int i=0 ; i<4 ; i++) {
            if ((H+v1[i])>=0&&(H+v1[i])<h&&(W+v2[i])>=0&&(W+v2[i])<w) {
                if (visitados[H+v1[i]][W+v2[i]]==0&&mapa[H+v1[i]][W+v2[i]]!='#') {
                    b=true;
                    int x=laberinto(H+v1[i], W+v2[i], mapa, visitados, n+1, h, w);
                    if (x!=0) return x;
                }
            }
        }
        return 0;
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int h, w, H, W, n=1;
    cin >> w >> h;
    string x;
    vector<string> mapa (h);
    vector<vector<int>> visitados(h, vector<int>(w,0));
    for (int i=0 ; i<h ; i++) {
        cin >> x;
        mapa[i]=x;
        if (x.find("E")!=string::npos) {
            W=x.find("E");
            H=i;
        }
    }
    cout << laberinto(H, W, mapa, visitados, n, h, w);
}
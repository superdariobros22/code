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

int hayfinal(int h, int w, int i, int  j, vector<vector<int>> &visitados, vector<string> &foto) {
    if (i==0||i==h-1||j==0||j==w-1) return 1;
    visitados[i][j]=1;
    bool b=false;
    vector<int> posx= {1, 0, -1, 0};
    vector<int> posy= {0, 1, 0, -1};
    for (int k=0 ; k<4 ; k++) {
        if (visitados[i+posx[k]][j+posy[k]]==0 && foto[i+posx[k]][j+posy[k]]=='.') {
            if(hayfinal(h, w, i+posx[k], j+posy[k], visitados, foto)==1) b=true;
        }
    }
    if (b==true) return 1;
    else return 0;

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
        bool hayovejas=false;
        for (int i=1 ; i<h-1 ; i++) {
            for (int j=1 ; j<w-1 ; j++) {
                vector<vector<int>> visitados (h, vector<int> (w, 0));
                if (foto[i][j]=='.') {
                    if (hayfinal(h, w, i, j, visitados, foto)==0) {
                        hayovejas=true;
                        break;
                    }
                }
            }
            if (hayovejas==true) break;
        }
        if (hayovejas==true) cout << "SI" << endl;
        else cout << "NO" << endl;
    }
    
    return 0;
}
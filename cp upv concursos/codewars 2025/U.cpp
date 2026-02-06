#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    vector<vector<char>> v(n,vector<char>(m));
    vector<int> S1, S2;
    for (int i=0 ; i<n ; i++) {
        bool b=false;
        int s1=-1, s2=-1;
        for (int j=0 ; j<m ; j++) {
            char x;
            cin >> x;
            v[i][j]=x;
            
            if (x=='#') {
                if (b==false) {
                    b=true;
                    s1=j;
                    s2=s1;
                } else {
                    s2=j;
                }
            }
        }
        S1.push_back(s1);
        S2.push_back(s2);
    }
    for (int i=0 ; i<n ; i++) {
        for (int j=0 ; j<m ; j++) {
            if (v[i][j]=='#') {
                cout << '#';
            } else {
                if (j>=S1[i]&&j<=S2[i]) {
                    cout << 'W';
                } else {
                    cout << '.';
                }
            }
        }
        cout << endl;
    }
}
#include<bits/stdc++.h>
using namespace std;

int main() {
    vector<vector<vector<int>>> v;

    while(true) {
        
        int f, c, n, i, a, b, m;
        cin >> f >> c >> n;

        if (f==0) {
            break;
        }

        vector<int> prueba(c, 0);
        vector<vector<int>> vec(f, prueba);
        
        for (int j=0 ;  j<n ; j++) {
            cin >> i >> a >> b >> m;
            for (int k=a ; k<=b ; k++) {
                vec[k][i]+=m;
            }
        }

        v.push_back(vec);
    }

    for ( int i=0 ; i<v.size() ; i++) {
        for (int j=0 ; j<v[i].size() ; j++) {
            for (int k=0 ; k<v[i][j]. size() ; k++) {
                cout << v[i][j][k] << ' ';
            }
            cout << endl;
        }
    }
}
#include "bits/stdc++.h"
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n, max=0;
    cin >> n;
    vector<vector<int>> v(n, vector<int>(62, 0));
    for (int i=0 ; i<n ; i++) {
        string x, y, dia1="", mes1="", dia2="", mes2="";
        int d1, d2, m1, m2, i1, i2;
        cin >> x >> y;
        dia1.push_back(x[0]);
        dia1.push_back(x[1]);
        dia2.push_back(y[0]);
        dia2.push_back(y[1]);
        mes1.push_back(x[3]);
        mes1.push_back(x[4]);
        mes2.push_back(y[3]);
        mes2.push_back(y[4]);
        d1=stoi(dia1);
        d2=stoi(dia2);
        m1=stoi(mes1);
        m2=stoi(mes2);
        if (m1==7) i1=d1-1;
        else i1=30+d1;
        if (m2==7) i2=d2-1;
        else i2=30+d2;
        for (int j=0 ; j<62 ; j++) {
            if (i==0) {
                if (j>=i1&&j<=i2) {
                    v[i][j]=1;
                }
            } else {
                v[i][j]=v[i-1][j];
                if (j>=i1&&j<=i2) {
                    v[i][j]=v[i][j]+1;
                }
            }
            if (v[i][j]>max) max=v[i][j];
        }
        
    }
    if (max>1) {
        cout << max << endl;
        for (int i=0 ; i<62 ; i++) {
            if (v[n-1][i]==max) {
                if (i<31) {
                    cout << setw(2) << setfill('0') << i+1 << "/07" << endl;
                } else {
                    cout << setw(2) << setfill('0') << i-30 << "/08" << endl;
                }
            }
        }
    }
    
    return 0;
}
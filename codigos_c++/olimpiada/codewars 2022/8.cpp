#include<bits/stdc++.h>
using namespace std;

int main() {
    int p1, p2, r1=0, r2=0, k=0;
    string e1, e2, r;
    getline(cin, r);
    for (size_t i=0 ; i<r.length()-2 ; i++) {
        if (r[i]=='-') {
            e1.pop_back();
            k=1;
        }
        if (k==0) {
            e1.push_back(r[i]);
        } else {
            e2.push_back(r[i+2]);
        }
        
    }
    for (int i=0 ; i<2 ; i++) {
        cin >> p1 >> r >> p2;
        if (p1>p2) r1++;
        else r2++;
    }
    if (r1==1) {
        cin >> p1 >> r >> p2;
        if (p1>p2) r1++;
        else r2++;
    }
    if (r1==2) cout << e1;
    else cout << e2;
    cout << " won the match " << r1 << " - " << r2 << '.';

}
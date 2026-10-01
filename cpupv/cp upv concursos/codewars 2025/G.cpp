#include "bits/stdc++.h"
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n, m, c=0;
    cin >> n >> m;
    for (int i=0 ; i<n ; i++) {
        int x, y;
        cin >> x >> y;
        if (m+x==y) c++;
    }
    cout << c;
    return 0;
}
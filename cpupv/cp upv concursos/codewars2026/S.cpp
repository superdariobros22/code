#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    for (int i=0 ; i<t ; i++) {
        int n;
        cin >> n;
        vector<pair<int,int>> v;
        for (int j=0 ; j<n ; j++) {
            pair<int,int> p;
            int x, y;
            cin >> x >> y;
            p.first=x;
            p.second=y;
            v.push_back(p);
        }
        bool b=false;
        for (int j=0 ; j<n ; j++) {
            for (int k=j+1 ; k<n ; k++) {cout << abs(v[j].first-v[k].first)<<abs(v[j].second-v[k].second);
                if (abs(v[j].first-v[k].first)%2==0&&abs(v[j].second-v[k].second)%2==0) {
                    b=true;
                    
                }
            }
        }
        if (b==false) cout << "NO" << endl;
        else cout << "YES" << endl;
    }
}
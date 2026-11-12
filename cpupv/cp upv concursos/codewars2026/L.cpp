#include<bits/stdc++.h>
using namespace std;

int main() {
    string x, y;
    getline(cin, x);
    getline(cin, y);
    if (x.length()!=y.length()) cout << "NO";
    else {
        map<char,int> v;
        map<char,int> w;
        for (int i=0 ; i<x.length() ; i++) {
            if (v.find(x[i])!=v.end()) {
                v[x[i]]++;
            } else {
                v[x[i]]=1;
            }
            if (w.find(y[i])!=w.end()) {
                w[y[i]]++;
            } else {
                w[y[i]]=1;
            }
        }
        int b=1;
        vector<int> vv;
        vector<int> ww;
        for (auto const& pi : v) {
            vv.push_back(pi.second);
            cout<<pi.first<<pi.second;
        }
        for (auto const& pii : w) {
            ww.push_back(pii.second);
        }
        for (int i=0 ; i<min(vv.size(),ww.size()) ; i++) {
            if (vv[i]!=ww[i])b=0;
        }
        if (b==1) cout << "YES";
        else cout << "NO";
    }
}
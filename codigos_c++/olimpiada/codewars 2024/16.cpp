#include<bits/stdc++.h>
using namespace std;

bool palin (string s) {
    bool b=true;
    for (size_t i=0 ; i<s.length()/2 ; i++) {
        if (s[i]!=s[s.length()-1-i]) {
            b=false;
        }
    }
    return b;
}

int main() {
    int a, b;
    cin >> a;
    vector<string> pal, nopal;
    for (int i=0 ; i<a ; i++) {
        string s;
        cin >> s;
        auto x=find(begin(pal), end(pal), s);
        auto y=find(begin(nopal), end(nopal), s);
        if (x==end(pal) && y==end(nopal)) {
            if (palin(s)==true) {
                pal.push_back(s);
            } else {
                nopal.push_back(s);
            }
        }
    }
    cin >> b;
    for (int i=0 ; i<b ; i++) {
        string s;
        cin >> s;
        auto x=find(begin(pal), end(pal), s);
        auto y=find(begin(nopal), end(nopal), s);
        if (x==end(pal) && y==end(nopal)) {
            if (palin(s)==true) {
                pal.push_back(s);
            } else {
                nopal.push_back(s);
            }
        }
    }
    for (int i=0 ; i<pal.size() ; i++) {
        cout << pal[i] << endl;
    }
    for (int i=0 ; i<nopal.size()-1 ; i++) {
        cout << nopal[i] << endl;
    } cout << nopal[nopal.size()-1];
}
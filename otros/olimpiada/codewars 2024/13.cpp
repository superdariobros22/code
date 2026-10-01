#include<bits/stdc++.h>
using namespace std;

int main() {
    vector<string> vs;
    vector<string> vs2;
    while(true) {
        string s;
        cin >> s;
        if (s=="#") {
            break;
        }
        if (s=="UPSIDE_DOWN") {
            vs2=vs;
            for (int i=0 ; i<vs.size() ; i++) {
                vs2[i]=vs[vs.size()-1-i];
            }
            vs=vs2;
        } else {
            vs.push_back(s);
        }
    }
    for (int i=0 ; i<vs.size() ; i++) {
        cout << vs[i] << ' ';
    }
}
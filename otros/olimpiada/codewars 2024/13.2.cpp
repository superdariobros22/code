#include<bits/stdc++.h>
using namespace std;

int main() {
    vector<string> v;
    vector<int> v2;
    vector<string> vr;
    int c=0, d=0, i=-1;
    while(true) {
        string s;
        cin >> s;
        if (s=="#") {
            break;
        }
        if (s!="UPSIDE_DOWN") {
            v.push_back(s);
            if (c%2==0) {
                v2.push_back(d);
                d++;
            } else {
                v2.push_back(i);
                i--;
            }
        }else {
            c++;
        }
    }
    int min=v2[0];
    for (int i=1 ; i<v2.size() ; i++) {
        if (v2[i]<min) {
            min=v2[i];
        }
    }
    
    for (int i=0 ; i<v2.size() ; i++) {
        int j=0;
        while (true) {
            
            if (v2[j]==min) {
                vr.push_back(v[j]);
                min++;
                break;
            }
            j++;
        }
    }
    for (int i=0 ; i<v2.size() ; i++) {
        cout << vr[i] << ' ';
    }
}
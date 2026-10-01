#include<bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    int pa=0, pc=0, paa=0, pcc=0;
    size_t k=0;
    for (size_t i=0 ; i<s.length() ; i++) {
        if (s[i]=='(') {
            pa++;
        } else{
            pc++;
        }
    }
    pcc=pc;
    for (size_t i=0 ; i<s.length()+1 ; i++) {
        if (pcc==paa) {
            k=i;
            break;
        }
        if (s[i]=='(') {
            paa++;
        } else{
            pcc--;
        }
    }
    cout << k << ' ';
    for (size_t i=0 ; i<s.length()+1 ; i++) {
        if (k==i) {
            cout << '-';
        }
        if (i<s.length()) {
            cout << s[i];
        }
        
    }
}
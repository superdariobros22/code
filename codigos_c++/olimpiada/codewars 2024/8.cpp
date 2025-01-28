#include<bits/stdc++.h>
using namespace std;

int main() {
    string s;
    int c=0;
    getline(cin, s);
    for (size_t i=0 ; i<s.length() ; i++) {
        if (s[i-1]!='0' && s[i-1]!='1' && s[i-1]!='2' && s[i-1]!='3' && s[i-1]!='4'
         && s[i-1]!='5' && s[i-1]!='6' && s[i-1]!='7' && s[i-1]!='8' && s[i-1]!='9') {

            if (s[i+2]!='0' && s[i+2]!='1' && s[i+2]!='2' && s[i+2]!='3' && s[i+2]!='4'
         && s[i+2]!='5' && s[i+2]!='6' && s[i+2]!='7' && s[i+2]!='8' && s[i+2]!='9') {
            if (s[i+1]=='2' && s[i]=='4') {
                c++;
            }
         }
        }
    }
    cout << c;
}

    
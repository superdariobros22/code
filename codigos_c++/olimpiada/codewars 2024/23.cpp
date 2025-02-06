#include<bits/stdc++.h>
using namespace std;

int main() {
    string s;
    int n;
    cin >> s;
    cin >> n;

    for (int i=0 ; i<64 ; i++) {
        if (s[i]=='0') {
            s[i]='-';
        } else {
            s[i]='*';
        }
    }
    cout << s << endl;
    string s2=s;
    for (int i=1 ; i<n ; i++) {

        if (s[1]=='-') {
            s2[0]='-';
        } else {
            s2[0]='*';
        }
        if (s[62]=='-') {
            s2[63]='-';
        } else {
            s2[63]='*';
        }
        
        for (int i=1 ; i<63 ; i++) {
            if ((s[i-1]=='-' && s[i+1]=='-')||(s[i-1]=='*' && s[i+1]=='*')) {
                s2[i]='-';
            } else {
                s2[i]='*';
            }
        }
        cout << s2 << endl;
        s=s2;
    }
}
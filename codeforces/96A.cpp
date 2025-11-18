#include<bits/stdc++.h>
using namespace std;

int main() {
    string s, x="NO";
    int cero=0, uno=0;
    cin >> s;
    if (s.length()<8) {
        x="NO";
    } else {
        for (size_t i=0 ; i<s.length() ; i++) {
            if (s[i]=='0') {
                cero++;
                if (cero>=7) {
                    x="YES";
                }
                uno=0;
            } else {
                uno++;
                if (uno>=7) {
                    x="YES";
                }
                cero=0;
            }
        }
    }
    cout << x;
}
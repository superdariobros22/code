#include<bits/stdc++.h>
using namespace std;

int main() {
    vector<int> vec;
    string s, number="";
    getline(cin, s);
    for (size_t i=0 ; i<s.length() ; i++) {
        if (s[i]==':' || s[i]==',') {
            s[i]=' ';
        }
    }
    for (size_t i=0 ; i<s.length() ; i++) {
        number.push_back(s[i]);
        if (s[i]==' ' && s[i-1]!=' ') {
            vec.push_back(stoi(number));
            number="";
        }
    }vec.push_back(stoi(number));
    int ht=vec[0], mt=vec[1], h=0, m=0, hr=0, mr=0;
    for (size_t i=2 ; i<vec.size() ; i++) {
        if (i%2==0) {
            h+=vec[i];
        } else {
            m+=vec[i];
        }
    }
    m+=(60*h);
    mt+=(60*ht);
    hr=(mt-m)/60;
    mr=(mt-m)%60;
    if (m<=mt) {
        if (hr<10) {
            cout << '0';
        } cout << hr << ':';
        if (mr<10) {
            cout << '0';
        } cout << mr;
        cout << " hours of viewing remaining.";
    } else {
        cout << "LIMIT EXCEEDED BY ";
        if ((-1*hr)<10) {
            cout << '0';
        } cout << -1*hr << ':';
        if ((-1*mr)<10) {
            cout <<'0';
        } cout << -1*mr;
        cout << " hours. Benigno punished!";
    }
}
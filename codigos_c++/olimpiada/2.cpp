#include<bits/stdc++.h>
using namespace std;

int main() {
    string a;
    cin >> a;
    string x;
    for(int i=0; i<a.size()-2 ; i++) {
        if(a[i+1]=='.' && a[i+2]=='.' && a[i]!='.') {
            x.push_back(a[i]);
        }
    }
    cout << x;

}
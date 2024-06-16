#include<bits/stdc++.h>
using namespace std;
int main() {
    int a;
    cin >> a;
    vector<string> vec;
    for (int j=0 ; j<a ; j++) {
        string x="";
        int o, i, c, v;
        cin >> o >> i >> c >> v;
        for (int l=0 ; l<o ; l++) {
            x.push_back('O');
        }
        for (int l=0 ; l<i ; l++) {
            x.push_back('I');
        }
        for (int l=0 ; l<c ; l++) {
            x.push_back('C');
        }
        for (int l=0 ; l<v ; l++) {
            x.push_back('V');
        }
        vec.push_back(x);
    }
    for (int j=0 ; j<a ; j++) {
        cout << vec[j] << endl;
    }
    
}
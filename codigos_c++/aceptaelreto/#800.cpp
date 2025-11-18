#include<bits/stdc++.h>
using namespace std;

bool divisor(int n) {
        int c=0;
        for (int i=1 ; i<=n ; i++) {
            if (n%i==0) {
                c++;
            }
        }
        if (c%2==0) {
            return false;
        } else {
            return true;
        }
    }

int main() {
    int n;
    vector<string> v;
    while(cin >> n) {
        
        if (divisor(n)==true) {
            v.push_back("ENCENDIDA");
        } else {
            v.push_back("APAGADA");
        }
    }
    for (size_t i=0 ; i<v.size() ; i++) {
        cout << v[i] << endl;
    }
}
#include<bits/stdc++.h>
using namespace std;

int main() {
    int a;
    cin >> a;
    vector<int> negras, blancas;

    for (int i=0 ; i<a ; i++) {
        int b;
        cin >> b;
        negras.push_back((4*(b-2))+(4*((b-1)/2))+(1));
        blancas.push_back((b*b)-((4*(b-2))+(4*((b-1)/2))+(1)));
    }

    for (int i=0 ; i<a ; i++) {
        cout << negras[i] << ' ' << blancas[i] << endl;
    }
}
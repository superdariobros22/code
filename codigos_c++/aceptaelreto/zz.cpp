#include<bits/stdc++.h>
using namespace std;

int main() {

    string frase;
    vector<char> vec;

    cout << "Introduzca la frase: ";
    cin >> frase;

    for (int i=0 ; i<frase.length(); i++) {
        vec.push_back(frase[i]);
    }

    for (int j=frase.length()-1 ; j>=0 ; j--) {
        cout << vec[j];
    }
}    
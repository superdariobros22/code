#include<bits/stdc++.h>
#include<cstdlib>
using namespace std;


int main() {
    int a, b;
    cin >> a >> b;
    if (b==0) {
        for (int i=0 ; i<a ; i++) {
            cout << "Hola OICV" << endl;
        }
    } else {
        vector<string> vec;
        for (int i=0 ; i<a ; i++) {
            string h;
            cin >> h;
            vec.push_back(h);
        } for (int i=0 ; i<a ; i++) {
            cout << "Hola " << vec[i] << endl;
        }
    }
}
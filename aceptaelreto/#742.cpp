#include<bits/stdc++.h>
using namespace std;

int main ( ) {
    int a;
    cin >> a;
    vector<char> vec;

    for (int i=0 ; i<a ; i++) {
        string x;
        int cero=0, uno=0, unodecero=0;
        bool antcero=false;
        cin >> x;
        for (int j=0 ; j<x.length() ; j++) {
            if (x[j]=='0') {
                cero++;
                antcero=true;
            } else if (x[j]=='1') {
                if (antcero==true) {
                unodecero++;
                }
                uno++;
                antcero=false;
            }
        }

        if (x[x.length()-1]=='0' && x[0]=='1') {
            unodecero++;
        }

        float girar = uno*100/(cero+uno);
        float nogirar = unodecero*100/cero;

        if (girar==nogirar) {
            vec.push_back('d');
        } else if (girar < nogirar) {
            vec.push_back('g');
        } else if (girar > nogirar) {
            vec.push_back('n');
        }
    }

    for (int i=0 ; i<vec.size() ; i++) {
        if (vec[i]=='d') {
            cout << "Da igual" << endl;
        } else if (vec[i]=='g') {
            cout << "Girar" << endl;
        } else if (vec[i]=='n') {
            cout << "No girar" << endl;
        }
    }
}
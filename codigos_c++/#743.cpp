#include<bits/stdc++.h>
using namespace std;

int main ( ) {
    vector<int> vec;
    while(true) {
        int a;
        cin >> a;

        if (a==0) {
            break;
        }

        int hojas1=0, hojas2=0;

        for (int i=0 ; i<a ; i++) {
            int b;
            cin >> b;
            hojas1=hojas1+b;
            if (b%2==0) {
                hojas2=hojas2+(b/2);
            } else if (b%2==1) {
                hojas2=hojas2+((b/2)+1);
            }
        }
        int dif=hojas1-hojas2;
        vec.push_back(dif);
    }
    for (int i=0 ; i<vec.size() ; i++) {
        cout << vec[i] << endl;
    }
}
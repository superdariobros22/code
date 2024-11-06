#include<bits/stdc++.h>
using namespace std;

int main() {
    int a;
    cin >> a;
    vector<int> vec;

    for (int i=0 ; i<a ; i++) {

        string x;
        cin >> x;

        int c=0;

        for (int j=0 ; j<x.length() ; j+=2) {
            if (x[j]==x[j+1]) {
                c++;
            }
        }

        c+=x.length()/2;
        vec.push_back(c);
    }

    for (int i=0 ; i<a ; i++) {
        cout << vec[i] << endl;
    }
}
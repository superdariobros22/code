#include<bits/stdc++.h>
using namespace std;

int main() {
    int x;
    cin >> x;
    vector<int> vec;
    for (int i=0 ; i<x ; i++) {
        int a;
        cin >> a;
        vector<int> vec2;
        for (int j=0 ; i<a ; j++) {
            int b;
            cin >> b;
            vec2.push_back(b);
        }

        int g=0;

        for (int j=0 ; j<a-1 ; j++) {
            if(vec2[j]>vec2[j+1]) {
                g++;
            }
        }

        vec.push_back(g);
    }
    for (int i=0 ; i<x ; i++) {
        cout << vec[i] << endl;
    }
}
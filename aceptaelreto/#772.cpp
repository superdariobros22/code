#include<bits/stdc++.h>
using namespace std;

int main() {

    int a, v;
    vector<int> vec;

    while (true) {
        cin >> a >> v;
        if (v==0) {
            break;
        }
        vec.push_back(a+(74*v));
        vec.push_back(a+(79*v));
    }
    for (int i=0 ; i<vec.size() ; i+=2) {
        cout << '[' << vec[i] << " .. " << vec[i+1] << ']' << endl;
    }
}
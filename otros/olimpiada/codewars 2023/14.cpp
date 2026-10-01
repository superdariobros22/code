#include<bits/stdc++.h>
using namespace std;

int main() {
    vector<string> vec;
    int n=0;
    while(true) {
        string s;
        cin >> s;
        if (s=="#") {
            n=stoi(vec[vec.size()-1]);
            vec.erase(vec.end());
            break;
        }
        vec.push_back(s);
    }
    int k=vec.size();
    for (int i=0 ; i<k ; i++) {
        vec.push_back(vec[i]);
    }
    for (int i=n ; i<k+n-1 ; i++) {
        cout << vec[i] << endl;
    } cout << vec[k+n-1];
}
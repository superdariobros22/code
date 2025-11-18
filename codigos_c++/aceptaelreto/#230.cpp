#include<bits/stdc++.h>
using namespace std;

int desorden(int k, vector<int> v) {
    int x=0;
    for (size_t i=k+1 ; i<v.size() ; i++) {
        if (v[i]<v[k]) {
            x++;
        }
    }
    return x;
}

int main() {
    vector<int> vec;
    while(true) {
        int n, des=0;
        cin >> n;
        vector<int> v;
        if (n==0) {
            break;
        }
        for (int i=0 ; i<n ; i++) {
            int x;
            cin >> x;
            v.push_back(x);
        }
        for (int i=0 ; i<n ; i++) {
            des+=desorden(i,v);
        }
        vec.push_back(des);
    }
    for (size_t i=0 ; i<vec.size() ; i++) {
        cout << vec[i] << endl;
    }
}
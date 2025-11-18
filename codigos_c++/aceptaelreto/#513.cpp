#include<bits/stdc++.h>
using namespace std;

int main() {
    int n, c=0;
    vector<vector<int>> vec;
    while(cin >> n) {
        vector<int> v;
        c=0;
        for (int i=0 ; i<n ; i++) {
            int x;
            cin >> x;
            v.push_back((i+1)*x-c);
            c+=(i+1)*x-c;
        }
        vec.push_back(v);
    }
    for (size_t i=0 ; i<vec.size() ; i++) {
        for (size_t j=0 ; j<vec[i].size() ; j++) {
            if (j==vec[i].size()-1) {
                cout << vec[i][j] << endl;
            } else {
                cout << vec[i][j] << ' ';
            }
        }
    }
}
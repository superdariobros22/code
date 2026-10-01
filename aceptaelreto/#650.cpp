#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    vector<int> vec;
    while(cin >> n) {
        vector<int> v;
        int c=0;
        for (int i=0 ; i<n ; i++) {
            int x;
            cin >> x;
            v.push_back(x);
        }
        sort(v.begin(), v.end());
        if (v.size()%3==1) {
            v.erase(v.begin());
        } else if (v.size()%3==2) {
            v.erase(v.begin());
            v.erase(v.begin());
        }
        for (int i=0 ; i<v.size() ; i+=3) {
            c+=v[i];
        }
        vec.push_back(c);
    }
    for (size_t i=0 ; i<vec.size() ; i++) {
        cout << vec[i] << endl;
    }
}
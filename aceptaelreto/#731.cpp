#include<bits/stdc++.h>
using namespace std;

int main() {
    vector<int> vec;

    while(true) {
        vector<int> v;
        int n;
        cin >> n;
        if (n==0) {
            break;
        }
        for (int i=0 ; i<n ; i++) {
            int x;
            cin >> x;
            if (x%2==0) {
                v.push_back(x/2);
            } else {
                v.push_back((x/2)+1);
            }
        }
        sort(v.begin(), v.end());
        int y=0;
        while(true) {
            if (y==v.size()-1) {
                break;
            }
            if (v[y]==v[y+1]) {
                v.erase(v.begin()+y);
            } else {
                y++;
            }
        }
        
        vec.push_back(v.size());

    }
    for (int i=0 ; i<vec.size() ; i++) {
        cout << vec[i] << endl;
    }
}
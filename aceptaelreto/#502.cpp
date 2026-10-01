#include<bits/stdc++.h>
using namespace std;

int main() {
    //cin.sync_with_stdio(false);
	//cin.tie(nullptr);
    int n;
    vector<int> vec;
    while(cin >> n) {
        int x;
        vector<int> v;
        cin >> x;
        v.push_back(x);
        for (int i=1 ; i<n ; i++) {
            cin >> x;
            size_t k=v.size();
            for (size_t j=0 ; j<k ; j++) {
                if (x<v[j]) {
                    v[j]=x;
                    break;
                } else {
                    if (j==v.size()-1) {
                        v.push_back(x);
                    }
                }
            }
        }
        vec.push_back(v.size());
    }
    for (size_t i=0 ; i<vec.size() ; i++) {
        cout << vec[i] << endl;
    }
}
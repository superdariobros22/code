#include<bits/stdc++.h>
using namespace std;

int main() {

    vector<int> v;

    while(true) {
        int n, k, nc=0, nk=0;
        cin >> n >> k;
        if (n==0 && k==0) {
            break;
        }

        vector<int> vec;

        for (int i=0 ; i<n ; i++) {
            int x;
            cin >> x;
            nc+=x;
            
            vec.push_back(x);
        }
        sort(vec.begin(), vec.end());
        for (int i=n-1 ; i>n-k-1 ; i--) {
            nk=nk+vec[i];
        }
        v.push_back(nc);
        v.push_back(nk);
    }
    for (size_t i=0 ; i<v.size() ; i+=2) {
        cout << v[i] << ' ' << v[i+1] << endl;
    }
}
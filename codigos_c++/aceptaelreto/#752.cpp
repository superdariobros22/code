#include<bits/stdc++.h>
using namespace std;

int main() {
    vector<int> vec2;
    while(true) {
        int p, v, s=0;
        vector<int> vec;
        cin >> p >> v;
        if (p==0) {
            break;
        }
        for (int i=0 ; i<v ; i++) {
            int x;
            cin >> x;
            vec.push_back(x);
            s+=x;
        }
        if (p>s) {
            vec2.push_back(0);
            vec2.push_back(0);

        } else {
            for (int i=0 ; i<v ; i++) {
                
            }
        }
    }
}
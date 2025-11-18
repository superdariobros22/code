#include<bits/stdc++.h>
using namespace std;

int main() {

    vector<int> vec;

    while(true) {
        int a, b;
        cin >> a >> b;
        vector<int> v;
        if (a==0) {
            break;
        }
        for (int i=0 ; i<a ; i++) {
            int x;
            cin >> x;
            v.push_back(x);
        }
        int max=0, i=0;

        while(max<v.size()) {
            while(v[0]+b>v[i]) {
                i++;
            }
            if(i>max) max=i;
            v.erase(v.begin());
        }
        vec.push_back(max);

    }

    for (size_t i=0 ; i<vec.size() ; i++) {
        cout << vec[i] << endl;
    }

}
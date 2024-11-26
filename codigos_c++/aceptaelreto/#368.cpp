#include<bits/stdc++.h>
using namespace std;

int main() {
    vector<int> v;
    while(true) {
        int x, y;
        cin >> x >> y;
        if (x==0) {
            break;
        }
        v.push_back((((x-1)/y)+1)*10);

    }
    for (int i=0 ; i<v.size() ; i++) {
        cout << v[i] << endl;
    }
}
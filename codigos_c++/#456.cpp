#include<bits/stdc++.h>
using namespace std;
int main() {
    vector<int>vec;
    int a;
    cin >> a;
    for (int i=0  ; i<a ; i++) {
        int x, y, z;
        cin >> x >> y >> z;
        if (z%(x*y)==0) {
            vec.push_back(z/(x*y));
        }else {
            vec.push_back(z/(x*y)+1);
        }
    }
    for (int i=0 ; i<a ; i++) {
        cout << vec[i] << endl;
    }
}
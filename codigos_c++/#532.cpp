#include<bits/stdc++.h>
using namespace std;

int main() {
    int a;
    cin >> a;
    vector<int> vec (a);

    for (int i=0 ; i<a ; i++) {
        int x, y;
        cin >> x >> y;
        vec[i]=y-x;
    } for (int i=0 ; i<a ; i++) {
        cout << vec[i] << endl;
    }
}
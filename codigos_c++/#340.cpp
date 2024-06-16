#include<bits/stdc++.h>
using namespace std;

int main() {
    int a;
    cin >> a;
    vector<int> vec;

    for (int i=0 ; i<a ; i++) {
        int x, y;
        cin >> x >> y;

        int z=x*2+y*2+x*(y-1)+y*(x-1);
        vec.push_back(z);
    }
    
    for (int i=0 ; i<a ; i++) {
        cout << vec[i] << endl;
    }
}
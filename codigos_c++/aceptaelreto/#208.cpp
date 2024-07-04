#include<bits/stdc++.h>
using namespace std;

int main() {
    vector<long long int> vec;
    while(true) {
        long long int x, y;
        cin >> x >> y;
        if (x==0 && y==0) {
            break;
        }
        int z=((x*(x+1))/2)-(((x-y+1)*(x-y+1+1))/2);
        vec.push_back(z);
    }

    for (int i=0 ; i<vec.size() ; i++) {
        cout << vec[i] << endl;
    }
}
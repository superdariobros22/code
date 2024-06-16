#include<bits/stdc++.h>
using namespace std;

int main() {
    vector<long long int> vec;
    while(true) {
        int a;
        cin >> a;
        if (a==0) {
            break;
        }

        float x=(1+a)/2;
        vec.push_back(x*a*3);
        
    }
    for (int i=0 ; i<vec.size() ; i++) {
        cout << vec[i] << endl;
    }
}   
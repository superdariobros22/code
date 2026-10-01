#include<bits/stdc++.h>
using namespace std;

int main() {
    vector<int> vec;
    int sum=0, mul=1;
    while(true) {
        string x;
        cin >> x;
        if (x=="#") {
            break;
        }
        int n= stoi(x);
        vec.push_back(n);
        sum+=n;
        mul*=n;
    }

    for (size_t i=0 ; i<vec.size()-1 ; i++) {
        cout << sum-vec[i] << ' ';
    }
    cout << sum-vec[vec.size()-1] << endl;
    for (size_t i=0 ; i<vec.size()-1 ; i++) {
        cout << mul/vec[i] << ' ';
    }
    cout << mul/vec[vec.size()-1];
    
}
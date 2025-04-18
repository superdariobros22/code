#include<bits/stdc++.h>
using namespace std;

int binary (int n) {
    int c=0;
    while(true) {
        if (n/2==0) {
            break;
        } else {
            if (n%2==1) {
                c++;
            }
            n=n/2;
        }

    }
    return c+1;
}

int main() {

    vector<int> v;
        
    int n;
    cin >> n;

    for (int i=0 ; i<n ; i++) {
        int x;
        cin >> x;
        v.push_back(binary(x));
    } for (int i=0 ; i<n ; i++) {
        cout << v[i] << endl;
    } 
}
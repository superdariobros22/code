#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    vector<double> v;
    for (int i=0 ; i<t ; i++) {
        double n, c=0;
        cin >> n;
        while(true) {
            c++;
            n=log(n);
            if (n<1) {
                break;
            }
        }
        c+=n;
        v.push_back(c);
    }
    for (int i=0 ; i<t ; i++) {
        cout << setprecision(16) << v[i] << endl;
    }
}
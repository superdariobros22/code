#include<bits/stdc++.h>
using namespace std;

int main() {
    vector<int> res;
    int n;
    cin >> n;

    for (int i=0 ; i<n ; i++) {
        int f1, f2, f3, f4, f;
        cin >> f1 >> f2 >> f3 >> f4;
        if (f1<=f3) {
            if (f2<=f4) {
                f=f2-f3+1;
            } else {
                f=f4-f3+1;
            }
        } else {
            if (f2<=f4) {
                f=f2-f1+1;
            } else {
                f=f4-f1+1;
            }
        } if (f<1) {
            f=0;
        }

        res.push_back(f);
    }

    for (int j=0 ; j<n ; j++) {
        cout << res[j] << endl;
    }

}
#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> v;
    for (int i=0 ; i<n ; i++) {
        int x, c=0;
        cin >> x;
        for (int j=2 ; j<=x ; j++) {
            int k=pow(2,j)-1;
            if (k%7==0) {
                c++;
            }
        }
        v.push_back(c);
    }
    for (int i=0 ; i<n ; i++) {
        cout << v[i] << endl;
    }
}
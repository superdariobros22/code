#include<bits/stdc++.h>
using namespace std;

int contar(int n) {
    int c=0;
    while(n!=0) {
        if (n%10==5) {
            c++;
        }
        n/=10;
    }
    return c;
}

int main() {
    int n, cincos=0;
    cin >> n;

    for (int i=4 ; i<=n ; i++) {
        cincos+=contar(i);
    }
    cout << cincos;
}
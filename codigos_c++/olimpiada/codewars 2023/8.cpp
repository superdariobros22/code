#include<bits/stdc++.h>
using namespace std;

int main() {
    int n, c=0;
    cin >> n;

    cout << n;

    while (n!=1) {
        c++;

        if (n%2==0) {
            n/=2;
        } else {
            n*=3;
            n+=1;
        }

        cout << " -> " << n;
    }
    cout << " [" << c << ']';
}
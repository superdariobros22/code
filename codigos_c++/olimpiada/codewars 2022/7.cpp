#include<bits/stdc++.h>
using namespace std;

int main() {
    int n, s;
    cin >> n >> s;
    for (int i=0 ; i<s ; i++) {
        int x=n, suma=0;
        while(x!=0) {
            suma+=x%10;
            x/=10;
        }
        n+=suma;
    }
    cout << n;
}
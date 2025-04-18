#include<bits/stdc++.h>
using namespace std;

int fun (int n) {
    if (n%2==0) {
        n/=2;
        return fun(n);
    } else {
        return n;
    }
    
}

int main() {
    int n;
    cin >> n;
    n=fun(n);
    cout << n;
}    
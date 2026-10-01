#include<bits/stdc++.h>
using namespace std;

int main() {
    int a, b=0;
    cin >> a;
    for (int i=0 ; i<a/3 ; i++) {
        b+=i+1;
    }
    cout << b*3;
}
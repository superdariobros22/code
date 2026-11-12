#include<bits/stdc++.h>
using namespace std;

long long int recu(long long int x) {
    if (x==0) return 1;
    if (x==1) return 2;
    if (x==2) return 3;
    return (recu(x-1)+recu(x-2)+recu(x-3));
}

int main() {
    long long int x;
    cin >> x;
    cout << recu(x);
}
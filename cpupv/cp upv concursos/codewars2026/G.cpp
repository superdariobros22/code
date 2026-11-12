#include<bits/stdc++.h>
using namespace std;

int main() {
   int t;
   cin >> t;
   for (int i=0 ; i<t ; i++) {
    long long int x;
    cin >> x;
    double y=log2(x);
    long long int yy=log2(x);
    if (yy==y) cout << "YES" << endl;
    else cout << "NO" << endl;
   } 
}
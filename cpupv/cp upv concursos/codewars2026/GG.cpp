#include<bits/stdc++.h>
using namespace std;

int main() {
   int t;
   cin >> t;
   for (int i=0 ; i<t ; i++) {
    long long int x;
    
    cin >> x;
    if (x==1) cout << "YES" << endl;
    else {bool b=true;
        while(x!=2) {
        if (x%2!=0) {
           b=false;
           break;
        } 
        else x=x/2;
    }
    if (b==false) cout << "NO" << endl;
    else cout << "YES" << endl;
    }
    
   } 
}
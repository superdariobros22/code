#include<bits/stdc++.h>
using namespace std;



int main() {

    long long int gr=600851475143, x=0;

    for (long long int i=2 ; i<600851475143 ; i++) {
        if (gr%i==0) {
            gr=gr/i;
            x=i;
            if (gr==1) {
                break;
            }
        }
    }
    cout << x;
}
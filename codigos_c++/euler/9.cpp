#include<bits/stdc++.h>
using namespace std;

int main() {
    for (int i=1 ; i<1000 ; i++) {

        double a=1000*(500-i);
        double b=1000-i;
        double c=a/b;
        int n=c;

        if (n/c==1 && n>0) {
            cout << i*c*(1000-i-c) << endl;
        }
    }
}
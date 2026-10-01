#include<bits/stdc++.h>
using namespace std;

int main() {

    int a=0, b=1, c=0, sum=0;

    while(true) {
        c=a+b;
        a=b;
        b=c;
        if (c>=4000000) {
            break;
        }
        if (c%2==0) {
            sum+=c;
        }
    }

    cout << sum;
}
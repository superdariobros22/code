#include<bits/stdc++.h>
using namespace std;

bool primo(long long int num) {

    long long int a=0;

    for (long long int j=1 ; j<num ; j++) {
        if (num%j==0) {
            a++;
        }
    }

    if (a==1) {
        return true;
    } else {
        return false;
    }
}

int main() {

    long long int x=0;

    for (long long int i=1 ; i<2000000 ; i++) {
        cout << i << endl;
        if (primo(i)==true) {
            x+=i;
        }

    }

    cout << x;
}
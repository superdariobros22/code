#include<bits/stdc++.h>
using namespace std;

bool primo(int num) {

    int a=0;

    for (int i=1 ; i<num ; i++) {
        if (num%i==0) {
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

    int n=2, c=0;

    while(true) {

        if (primo(n)==true) {
            c++;
        }

        if (c==10001) {
            break;
        }

        n++;
    }

    cout << n;
}
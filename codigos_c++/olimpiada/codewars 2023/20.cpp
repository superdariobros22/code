#include<bits/stdc++.h>
using namespace std;

int main() {

    int friends=0;

    for (int i=1 ; i<10 ; i++) {
        for (int j=1 ; j<10 ; j++) {
            int x;
            cin >> x;
            int f=(i-1)/3;
            int c=((j-1)/3)+1;
            int fc=f*3+c;
            if (x==i || x==j || x==fc) {
                friends++;
            }
        }
    }
    cout << "Number of friends = " << friends;
}
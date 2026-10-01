#include<bits/stdc++.h>
using namespace std;

int main() {
    int x, y, c=0;
    while (true) {
        c++;
        string a;
        getline(cin,a);
        if (a=="#") {
            break;
        }
        for (int i=0 ; i<a.length() ; i++) {
            if (a[i]=='o') {
                x=i;
                y=c-1;
            }
        }
    }

    cout << "The ball is in: (" << x << ", " << y << ')';
}
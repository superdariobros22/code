#include<bits/stdc++.h>
using namespace std;

int main() {

    long long int cs=0, sc=0;
    int s=0;

    for (int i=1 ; i<=10 ; i++) {
        s+=i;
        sc+=pow(i, 2);
    }

    cs=pow(s, 2);

    cout << cs-sc+1;
}
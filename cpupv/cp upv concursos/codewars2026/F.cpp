#include<bits/stdc++.h>
using namespace std;

int main() {
    int a, b, c, d, e, s=0;
    cin >> a >> b >> c >> d >> e;
    float media=(a+b+c+d+e)/5;
    if (a<5) s++;
    if (b<5) s++;
    if (c<5) s++;
    if (d<5) s++;
    if (e<5) s++;
    if (media>=5&&s<=2) {
        cout << "YES";
    } else {
        cout << "NO";
    }
}
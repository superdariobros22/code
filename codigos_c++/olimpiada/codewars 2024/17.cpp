#include<bits/stdc++.h>
using namespace std;

int main() {
    int x, y, s;
    cin >> x >> y;
    if (x<=y) {
        if (y%2==0) {
            s=pow((y-1), 2)+x;
        } else {
            s=pow(y, 2)-(x-1);
        }
    } else {
        if (x%2==0) {
            s=pow(x, 2)-(y-1);
        } else {
            s=pow((x-1), 2)+y;
        }
    }
    cout << s;
}
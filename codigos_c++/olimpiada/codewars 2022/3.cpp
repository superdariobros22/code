#include<bits/stdc++.h>
using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;
    if (a%b==c) {
        cout << "CORRECT, the capacity of each box is " << a/b;
    } else {
        cout << "INCORRECT";
    }
}
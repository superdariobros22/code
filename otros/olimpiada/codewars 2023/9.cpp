#include<bits/stdc++.h>
using namespace std;

int main() {
    float a, b, c, d;
    cin >> a >> b >> c >> d;
    float x=a*(((b*36/10)+c)/((b*36/10)+d));
    cout << fixed << setprecision(2) << x << " Hz";
}
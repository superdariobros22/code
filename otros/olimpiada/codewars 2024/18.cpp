#include<bits/stdc++.h>
using namespace std;

int main() {
    double r1, r2, r3, r41, r42, s1, s2, s3, s41, s42, a=1, b, c;
    cin >> r1 >> r2 >> r3;
    s1=1/r1;
    s2=1/r2;
    s3=1/r3;
    b=-2*(s1+s2+s3);
    c=(2*(pow(s1, 2)+pow(s2, 2)+pow(s3, 2)))-pow(s1+s2+s3, 2);
    s41=(-b+sqrt(pow(b, 2)-(4*a*c)))/(2*a);
    s42=(-b-sqrt(pow(b, 2)-(4*a*c)))/(2*a);
    r41=1/s41;
    r42=1/s42;
    cout << fixed << setprecision(5) << r41 << endl;
    cout << fixed << setprecision(5) << r42;


}
#include<bits/stdc++.h>
using namespace std;
int main() {
    int a, b;
    cout << "Introduce el multiplicando (3 cifras): ";
    cin >> a;
    cout << "Introduce el multiplicador (3 cifras): ";
    cin >> b;
    cout << "El producto de la multiplicacion es: " << a*b << endl << "El proceso es:" << endl;
    cout << "   " << a << endl << " x " << b << endl << "--------" << endl;
    int x=a*(b-(b/100*100)-(b/10-(b/100*10))*10);
    int y=a*(b/10-(b/100*10));
    int z=a*(b/100);
    if (x<1000) {
        cout << "   " << x;
    } else {
        cout << "  " << x;
    } cout << endl;
    if (y<1000) {
        cout << "  " << y << "x";
    } else {
        cout << " " << y << "x";
    } cout << endl;
    if (z<1000) {
        cout << " " << z << "xx";
    } else {
        cout << z << "xx";
    } cout << endl;
    cout << "--------" << endl;
    if ((a*b)<100000) {
        cout << " " << a*b;
    } else {
        cout << a*b;
    }
}
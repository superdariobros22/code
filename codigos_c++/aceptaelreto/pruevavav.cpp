#include <bits/stdc++.h>
using namespace std;
 
int main() {

  float a, b;

  cout << "Introduzca el precio inicial: ";
  cin >> a;
  cout << endl << "Introduzca el descuento a realizar (%) ";
  cin >> b;
  cout << endl << "El descuento es: " << a*(b/100) << endl << "El precio final es: " << a*((100-b)/100);

}


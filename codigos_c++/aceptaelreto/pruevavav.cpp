#include <bits/stdc++.h>
using namespace std;

float superficie(float a, float b) {
return a*b;
}

int main() {

  float base, altura;

  cout << "Introduce la base: ";
  cin >> base;
  cout << "Introduce la altura: ";
  cin >> altura;

  cout << superficie(altura, base);

}

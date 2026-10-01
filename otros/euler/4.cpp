#include<bits/stdc++.h>
using namespace std;

bool pali(int num) {

    int x=(num/100000);
    int y=(num/10000)-(10*x);
    int z=(num/1000)-(100*x)-(10*y);
    int xx=(num/100)-(1000*x)-(100*y)-(10*z);
    int yy=(num/10)-(10000*x)-(1000*y)-(100*z)-(10*xx);
    int zz=num-(100000*x)-(10000*y)-(1000*z)-(100*xx)-(10*yy);

  int num2=x+10*y+100*z+1000*xx+10000*yy+100000*zz;

  if (num==num2) {
    return true;
  } else {
    return false;
  }
}

int main() {

    int a=0;

    for (int i=100 ; i<=999 ; i++) {
        for (int j=i; j<=999 ; j++) {
            if (pali(j*i)==true) {
                
                if (j*i>a) {
                    a=j*i;
                }
                
            }
        }
    }

    cout << a;
}
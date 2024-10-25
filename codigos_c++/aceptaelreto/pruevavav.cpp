#include <bits/stdc++.h>
using namespace std;

//108900
 
int main() {
int num=906609;


  int x=(num/100000);
  int y=(num/10000)-(10*x);
  int z=(num/1000)-(100*x)-(10*y);
  int xx=(num/100)-(1000*x)-(100*y)-(10*z);
  int yy=(num/10)-(10000*x)-(1000*y)-(100*z)-(10*xx);
  int zz=num-(100000*x)-(10000*y)-(1000*z)-(100*xx)-(10*yy);

  num=x+10*y+100*z+1000*xx+10000*yy+100000*zz;

  cout << num;
}


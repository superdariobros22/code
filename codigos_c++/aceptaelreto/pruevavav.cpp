#include <bits/stdc++.h>
using namespace std;

int main() {

  vector<int> vec = {2, 4, 3, 1, 5, 7, 6};
  sort(vec.begin(), vec.end());
  vec.erase(vec.begin()+3);
  for (int i=0 ; i<7 ; i++) {
    cout << vec[i];
  }

}

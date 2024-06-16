#include <bits/stdc++.h>
using namespace std;
 
int main() {
  vector<int> vec = {1, 2, 3, 4, 5};
  vec.erase(vec.begin()+2);
  for (int i=0 ; i<vec.size() ; i++) {
    cout << vec[i] << ' ';
  }
}
#include<bits/stdc++.h>
using namespace std;

int main() {
    string s={'T', 'R', 'W', 'A', 'G', 'M', 'Y', 'F', 'P', 'D', 'X',
         'B', 'N', 'J', 'Z', 'S', 'Q', 'V', 'H', 'L', 'C', 'K', 'E'};

    int n;
    cin >> n;

    cout << "Letter: " << s[n%23];
}
#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> vec (n);

    for (int i=0 ; i<n ; i++) {
        int x, y;
        cin >> x >> y;

        vec[i]=(((x+y)*(x+y+1))/2)+(x+1);
    }
    for (int i=0 ; i<n ; i++) {
        cout << vec[i] << endl;
    }
}
#include<bits/stdc++.h>
using namespace std;

int alfa(string max, string x) {
    int n=0, c=0;
    while(true) {
        if (x[c]<max[c]) {
            n=1;
            break;
        } else if (x[c]>max[c]) {
            break;
        }
        c++;
    }
    return n;
}

int main() {
    int n, max=0;
    double c=0;
    string max2;
    cin >> n;
    for (int i=0 ; i<n ; i++) {
        string x;
        cin >> x;
        int y;
        cin >> y;
        c+=y;
        if (y>max) {
            max=y;
            max2=x;
        } else if (y==max) {
            if (alfa(max2,x)==1) {
                max2=x;
            }
        }
    }
    cout << max2 << ' ' << setprecision(2) << fixed << c/100;
}
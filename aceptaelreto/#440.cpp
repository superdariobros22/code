#include<bits/stdc++.h>
using namespace std;

int main() {
    vector<int> vec;
    while(true) {
        int n, max=0, min=1000000000, vel=1000000000, c=1, g=0;
        cin >> n;

        if (n==0) {
            break;
        }

        for (int i=0 ; i<n ; i++) {
            int x;
            cin >> x;
            if (x<vel) {
                if (i!=0) {
                    if (c>max) {
                    max=c;
                } if (c<min) {
                    min=c;
                }
                }
                c=1;
                g++;
                vel=x;
            } else {
                c++;
                if (i==(n-1)) {
                    if (c>max) {
                    max=c;
                } if (c<min) {
                    min=c;
                }
                }
            }
        }

        vec.push_back(g);
        vec.push_back(min);
        vec.push_back(max);

    }
    for (size_t i=0 ; i<vec.size() ; i++) {
        if ((i+1)%3==0) {
            cout << vec[i] << endl;
        } else {
            cout << vec[i] << ' ';
        }
    }
}
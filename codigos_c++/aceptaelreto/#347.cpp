#include<bits/stdc++.h>
using namespace std;
int main() {
    vector<int> vec;
    while(true) {
        int a, b, x;
        cin >> a >> b;
        if (a==0 && b==0) {
            break;
        }

        if (a==b && a>=10 && b>=10) {
            x=1;
        } else {
           while(true) {
            if (a<10 || b<10) {
                break;
            }
            if (a>b) {
                a=a-(a-b);
            } else if (b>a) {
                b=b-(b-a);
            }
            x++;
            } 
        }
        vec.push_back(x);
        
    }
    int y=vec.size();
    for (int i=0 ; i<y ; i++) {
        cout << vec[i] << endl;
    }
}
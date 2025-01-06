#include<bits/stdc++.h>
using namespace std;

int main() {

    vector<long long int> vec;

    while(true) {

        long long int a=0, b=0, max=0;

        while(true) {

            cin >> b;

            if (b==0) {
                break;
            }
            if ((a+b)>max) {
                max=a+b;
            }
            a=b;
        }

        if (max==0) {
            break;
        }

        vec.push_back(max);
    }

    for (long long int i=0 ; i<vec.size() ; i++) {
        cout << vec[i] << endl;
    }
}
#include<bits/stdc++.h>
using namespace std;
int main() {
    vector<int> right, left;
    while(true) {
        int a, pic=0, poc=0, pong=0, r=0, l=0;
        char ug='a';
        cin >> a;
        if (a==0) {
            break;
        }
        for (int i=0 ; i<a ; i++) {
            string y;
            cin >> y;
            if (y=="PIC") {
                pic++;
            } else if (y=="POC") {
                poc++;
            } else if (y=="PONG!") {
                pong++;
                if (pong==1) {
                    if(pic%2==0) {
                        l++;
                        ug='l';
                    } else if(pic%2==1) {
                        r++;
                        ug='r';
                    }
                } else if (pong>1){
                    if (ug=='r') {
                        if(pic%2==1) {
                        l++;
                        ug='l';
                    } else if(pic%2==0) {
                        r++;
                        ug='r';
                    }
                    } else if (ug=='l') {
                        if(pic%2==0) {
                        l++;
                        ug='l';
                    } else if(pic%2==1) {
                        r++;
                        ug='r';
                    }
                    }
                }
                pic=0;
            }

        }
        right.push_back(r);
        left.push_back(l);
    }
    for (int i=0 ; i<left.size() ; i++) {
        cout << left[i] << ' ' << right[i] << endl;
    }
}
#include<bits/stdc++.h>
using namespace std;

int main() {

    int max, tipos;
    vector<string> vec;

    while (true) {

        cin >> max >> tipos;

        vector<int> vec2 (tipos);
        
        if (tipos==0) {
            break;
        }

        int x, h=0;
        bool b=true;

        for (int i=0 ; i<tipos ; i++) {
            cin >> x;
            vec2[i]=x;
        } for (int i=0 ; i<tipos ; i++) {
            cin >> x;
            if (x>vec2[i]) {
                b=false;
            }
            h=h+x;
        }

        if (h>max) {
            vec.push_back("NO");
        } else {
            if (b==false) {
                vec.push_back("NO");
            }else {
                vec.push_back("SI");
            }
            
        }
    }
    for (int i=0 ; i<vec.size() ; i++) {
        cout << vec[i] << endl;
    }
}
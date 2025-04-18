#include<bits/stdc++.h>
using namespace std;

int main() {
    vector<string> vec;
    while(true) {
        string s;
        cin >> s;
        if (s[s.length()-1]=='.') {
            s.erase(s.length()-1);
            vec.push_back(s);
            break;
        }
        vec.push_back(s);
    }
    for (size_t i=0 ; i<vec.size() ; i++) {
        if (vec[i][0]==toupper(vec[i][0])) {
            int k=i+1;
            string str="";
            str.push_back(vec[i][0]);
            while(vec[k][0]==toupper(vec[k][0])) {
                str.push_back(vec[k][0]);
                k++;
                if (k==vec.size()) {
                    break;
                }
            }
            if (str.length()>1) {
                vec[i]=str;
                for (int j=i+1 ; j<k ; j++) {
                    vec[j]="00";
                    
                }
                i=k;
            }
            
        }
    }
    int l=0;
    for (size_t i=vec.size()-1 ; i>=0 ; i--) {
        if (vec[i]!="00") {
            l=i;
            break;
        }
    }
    for (size_t i=0 ; i<l ; i++) {
        if (vec[i]!="00") {
            cout << vec[i] << ' ';
        }
    }
    cout << vec[l] << '.';
}
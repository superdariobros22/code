#include<bits/stdc++.h>
using namespace std;

int main() {
    vector<vector<string>> vec2;
    vector<int> vec3;
    while(true) {
        vector<string> vec;
        string s;
        getline(cin, s);
        if (s=="#") {
            break;
        }
        string str="";
        int n=0;
        for (size_t i=0 ; i<s.length() ; i++) {
            if (s[i]==' ') {
                vec.push_back(str);
                if (str.length()>n) {
                    n=str.length();
                }
                str="";
            } else if(i==s.length()-1) {
                vec.push_back(str);
                str.push_back(s[i]);
                if (str.length()>n) {
                    n=str.length();
                }
            } else {
                str.push_back(s[i]);
            }
        }
        vec2.push_back(vec);
        vec3.push_back(n);
    }
    for (int i=0 ; i<vec3[0]+4 ; i++) {
        cout << '#';
    } cout << endl;
    for (int i=0 ; i<vec2.size() ; i++) {
        for (int j=0 ; j<vec2[i].size() ; j++) {
            cout << "# " << vec2[i][j];
            for (int k=0 ; k<vec3[i]-vec2[i][j].length() ; k++) {
                cout << ' ';
            }
            cout << " #" << endl;
        }
    }
}
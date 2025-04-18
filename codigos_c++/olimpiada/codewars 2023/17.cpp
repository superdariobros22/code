#include<bits/stdc++.h>
using namespace std;

int main() {

    vector<string> vec;
    vector<int> vec2;

    bool b=false;

    while(true) {
        string s;
        cin >> s;
        if (s[s.length()-1]=='.') {
            b=true;
            s.erase(s.length()-1);
            vec.push_back(s);
            break;
        }
        if (s[0]=='0' || s[0]=='1' || s[0]=='2' || s[0]=='3' || s[0]=='4' || 
            s[0]=='5' || s[0]=='6' || s[0]=='7' || s[0]=='8' || s[0]=='9') {
                vec2.push_back(stoi(s));
                break;
            }
        vec.push_back(s);
    }

    while (true) {
        string x;
        cin >> x;
        if (x=="#") {
            break;
        }
        vec2.push_back(stoi(x));
    }

    for (size_t i=0 ; i<vec2.size() ; i++) {
        reverse(vec[vec2[i]-1].begin(), vec[vec2[i]-1].end());
    }

    for (size_t i=0 ; i<vec.size()-1 ; i++) {
        cout << vec[i] << ' ';
    }
    cout << vec[vec.size()-1];
    if (b==true) {
        cout << '.';
    }
}
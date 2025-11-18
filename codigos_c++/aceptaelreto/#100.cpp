#include<bits/stdc++.h>
using namespace std;

string kap(string a) {
    char i, ii, iii, iv;
    int I, II, III, IV;
    i=a[0];
    ii=a[1];
    iii=a[2];
    iv=a[3];
    I=i-'0';
    II=ii-'0';
    III=iii-'0';
    IV=iv-'0';
    vector<int> v = {I, II, III, IV};
    sort(v.begin(), v.end());
    int i1=0, i2=0;
    i1=v[0]*1000+v[1]*100+v[2]*10+v[3];
    i2=v[3]*1000+v[2]*100+v[1]*10+v[0];
    int aa=i2-i1;
    string str=to_string(aa);
    if (str.length()==3) {
        str.insert(0,"0");
    } else if (str.length()==2) {
        str.insert(0,"00");
    } else if (str.length()==1) {
        str.insert(0,"000");
    } return str;
}


int main() {
    int n, c;
    cin >> n;
    vector<int> v2;
    for (int i=0 ; i<n ; i++) {
        c=0;
        string a;
        cin >> a;
        if (a[0]==a[i]&&a[0]==a[2]&&a[0]==a[3]) {
            c=8;
        } else {
            while(a!="6174") {
            c++;
            a=kap(a);
            }
        }
        
        v2.push_back(c);
    }
    for (size_t i=0 ; i<v2.size() ; i++) {
        cout << v2[i] << endl;
    }
}
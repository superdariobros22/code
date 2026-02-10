#include "bits/stdc++.h"
using namespace std;

int primo(int n) {
    int c=0;
    for (int i=1 ; i<=sqrt(n) ; i++) {
        if (n%i==0) c++;
    }
    if (c<2) return 1;
    else return 0;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
    vector<string> v;
    string x, res;
    cin >> n;
    for (int i=0 ; i<n ; i++) {
        string sub="bratwurst";
        res="DAS";
        cin >> x;
        if (x[0]=='a') res="DIE";
        else if (x[x.length()-1]=='r') res="DER";
        else if (x.find(sub)!=string::npos) res="DIE";
        else if (primo(x.length())==1) res="DER";
        else if (x.length()>=20&&x.length()<=40) {
            if (x[2]=='a'&&x[3]=='a'&&x[5]=='a'&&x[7]=='a'&&x[11]=='a'&&x[13]=='a'&&x[17]=='a'&&x[19]=='a'&&x[23]=='a'&&x[29]=='a'&&x[31]=='a'&&x[37]=='a') {
                res="DIE";
            } else if (x[2]=='b'&&x[3]=='b'&&x[5]=='b'&&x[7]=='b'&&x[11]=='b'&&x[13]=='b'&&x[17]=='b'&&x[19]=='b'&&x[23]=='b'&&x[29]=='b'&&x[31]=='b'&&x[37]=='b') {
                res="DER";
            }
        }
        v.push_back(res);
    }

    for (int i=0 ; i<n ; i++) {
        cout << v[i] << endl;
    }
    
    return 0;
}
#include<bits/stdc++.h>
using namespace std;

int main() {
    vector<int> vclave;
    string a, s;
    cin >> a;
    int tamano=a.length();
    int clave=stoi (a);
    cin.ignore();
    getline(cin, s);

    while (true) {
        if (s.length()%tamano==0) {
            break;
        } else {
            s.push_back('*');
        }
    }
    
    for (int i=tamano-1 ; i>=0 ; i--) {
        int x=clave/(pow(10,i));
        vclave.push_back(x);
        clave=clave-(x*(pow(10,i)));
    }
    
    
    string s2;
    int c=0;

    for (int i=0 ; i<(s.length()/tamano) ; i++) {
        for (int j=0 ; j<tamano ; j++) {
            s2.push_back(s[vclave[j]-1+(tamano*((c)/tamano))]);
            c++;
        }
        
    }
    cout << s2;
    
}
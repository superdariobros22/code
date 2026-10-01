#include<bits/stdc++.h>
using namespace std;

int main() {

    string s;

    while(true) {
        string d;
        getline(cin, d);
        
        if (d[d.length()-1]=='#') {
            s=s+d;
            break;
        }
        s=s+d+" ";
    }


    vector<char> min = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k',
    'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
    vector<char> may = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K',
    'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};
    
    for (int i=0 ; i<s.length() ; i++) {
        for (int j=0 ; j<min.size() ; j++) {
            if (s[i]==min[j] || s[i]==may[j]) {
                min[j]='0';
                may[j]='0';
                break;
            }
        }
    }

    int cuenta=0;
    string final;

    for (int i=0 ; i<min.size() ; i++) {
        if (min[i]!='0') {
            cuenta++;
            if (final.length()%2==0) {
                final.push_back(may[i]);
            } else {
                final.push_back(min[i]);
            }
        }
    }
    if (final.length()==0) {
        cout << "There are no letters lost!";
    } else {
        for (int i=0 ; i<cuenta-1 ; i++) {
        for (int j=0 ; j<i ; j++) {
            cout << "  " ;
        }
        cout << final[i] << '_';
        cout << endl;
        }
        for (int j=0 ; j<cuenta-1 ; j++) {
            cout << "  ";
        }
        cout << final[cuenta-1];
    }
    
}
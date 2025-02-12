#include<bits/stdc++.h>
using namespace std;

string numeroaletra(int n) {
    int sol=0;
    for (int i=10 ; i>=0 ; i--) {
        if (n/pow(26,i)!=0) {
            switch(n/pow(26,i)) {
                case '1'
            }
            n=n%pow(26,i);
        }
    }
    string s=to_string(sol);
    for (int i=0 ; i<s.length() ; i++) {
        switch(n/pow(26,i)) {
            case '1'
        }
    }
}

int letraanumero(string s) {
    int n=0;
    for (size_t i=s.length()-1 ; i>=0 ; i--) {
        switch(s[i]) {
            case 'A': n+=1*pow(26,i);
            break;
            case 'B': n+=2*pow(26,i);
            break;
            case 'C': n+=3*pow(26,i);
            break;
            case 'D': n+=4*pow(26,i);
            break;
            case 'E': n+=5*pow(26,i);
            break;
            case 'F': n+=6*pow(26,i);
            break;
            case 'G': n+=7*pow(26,i);
            break;
            case 'H': n+=8*pow(26,i);
            break;
            case 'I': n+=9*pow(26,i);
            break;
            case 'J': n+=10*pow(26,i);
            break;
            case 'K': n+=11*pow(26,i);
            break;
            case 'L': n+=12*pow(26,i);
            break;
            case 'M': n+=13*pow(26,i);
            break;
            case 'N': n+=14*pow(26,i);
            break;
            case 'O': n+=15*pow(26,i);
            break;
            case 'P': n+=16*pow(26,i);
            break;
            case 'Q': n+=17*pow(26,i);
            break;
            case 'R': n+=18*pow(26,i);
            break;
            case 'S': n+=19*pow(26,i);
            break;
            case 'T': n+=20*pow(26,i);
            break;
            case 'U': n+=21*pow(26,i);
            break;
            case 'V': n+=22*pow(26,i);
            break;
            case 'W': n+=23*pow(26,i);
            break;
            case 'X': n+=24*pow(26,i);
            break;
            case 'Y': n+=25*pow(26,i);
            break;
            case 'Z': n+=26*pow(26,i);
            break;
        }
    }
    return n;
 }

int main() {
    string s;
    cin >> s;
    if (s[0]=='0' || s[0]=='1' || s[0]=='2' || s[0]=='3' || s[0]=='4' 
    || s[0]=='5' || s[0]=='6' || s[0]=='7' || s[0]=='8' || s[0]=='9') {
        int n=stoi(s);
        cout << numeroaletra(n);
    } else {
        cout << letraanumero(s);
    }
}
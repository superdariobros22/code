#include<bits/stdc++.h>
using namespace std;

bool vocal(char c) {
    if (c=='a' || c=='e' || c=='i' || c=='o' || c=='u') {
        return true;
    } else {
        return false;
    }
}

int main() {
    string x;
    cin >> x;
    for (size_t i=0 ; i<x.length()-2 ; i++) {
        if (vocal(x[i])==true && vocal(x[i+1])==true && vocal(x[i+2])==false) {
            if (i!=0 && vocal(x[i-1])==false) {
                char d=x[i];
                x[i]=x[i+1];
                x[i+1]=d;
            } else if (i==0) {
                char d=x[i];
                x[i]=x[i+1];
                x[i+1]=d;
            }
            
        }
    }
    if (vocal(x[x.length()-2])==true && vocal(x[x.length()-1])==true) {
        char d=x[x.length()-2];
            x[x.length()-2]=x[x.length()-1];
            x[x.length()-1]=d;
    }
    cout << x;
}
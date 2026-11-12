#include<bits/stdc++.h>
using namespace std;

int main() {
    string uno ;
    getline(cin, uno);

    string dos ;
    getline(cin, dos);

    for(int i = 0; i < uno.length(); i++){
        bool cmp = false;
        int j = 0;
        while(cmp == false && j < dos.size()){
            if(uno[i] == dos[j]){
                dos.erase(j,1);
                j++;
                cmp =true;
            }
        }
    }

}
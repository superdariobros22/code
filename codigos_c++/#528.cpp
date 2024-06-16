#include<bits/stdc++.h>
using namespace std;
int main() {
    vector<int> vec;
    while(true) {
        int a;
        cin >> a;
        if (a==0) {
            break;
        }
        int mayor=0, menor=0, ambos=0, total=0, cant=0;
        for (int i=0 ; i<a ; i++) {
            double y;
            cin >> y;
            cant++;
            if (y>1) {
                mayor++;
            } else if (y<1 && y>0) {
                menor++;
            } else {
                ambos++;
            }
        }
        for (int i=1 ; i<mayor ; i++) {
            total+=i;
        } for (int i=1 ; i<menor ; i++) {
            total+=i;
        } for (int i=cant-1 ; i>(cant-1-ambos); i--) {
            total+=i;
        }
        vec.push_back(total);
    }
    for (int i=0 ; i<vec.size() ; i++) {
        cout << vec[i] << endl;
    }
}
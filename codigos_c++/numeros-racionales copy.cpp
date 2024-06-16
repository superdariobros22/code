#include<bits/stdc++.h>
using namespace std;

int main() {
    string str;
    cout << "EL NUMERO ES PERIODICO PURO O PERIODICO MIXTO: ";
    cin >> str;

    if (str=="PURO") {
        int entero, decimal;
        cout << "INTRODUZCA PARTE ENTERA: ";
        cin >> entero;
        cout << "INTRODUZCA PARTE DECIMAL PERIODICA: ";
        cin >> decimal;
        int decimal2=decimal, it=0;
        while(decimal2 > 0) {
            it++;
            decimal2 = decimal2/10; 
        }
        int z = (entero*pow(10, it)+decimal)-entero+1, y=(pow(10, it));
        cout << "SU FRACCION ES: " << z << " / " << y;
    } else {
        int entero, decimalnp, decimalp;
        cout << "INTRODUZCA PARTE ENTERA: ";
        cin >> entero;
        cout << "INTRODUZCA PARTE DECIMAL NO PERIODICA: ";
        cin >> decimalnp;
        cout << "INTRODUZCA PARTE DECIMAL PERIODICA: ";
        cin >> decimalp;
        int decimalp2=decimalp, itp=0;
        while(decimalp2 > 0) {
            itp++;
            decimalp2 = decimalp2/10;
        } 
        int decimalnp2=decimalnp, itnp=0;
        while(decimalnp2 > 0) {
            itnp++;
            decimalnp2 = decimalnp2/10;
        }
        int z = (entero*pow(10, (itp+itnp))+decimalnp+pow(10, itp)+decimalp)-(entero*pow(10, itnp)+decimalnp), y=(pow(10, (itp+itnp))-pow(10, itnp));
        cout << "SU FRACCION ES: " << z << " / " << y;
    }
    

}
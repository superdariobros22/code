#include<bits/stdc++.h>
using namespace std;

int main() {
    string str;
    cout << "EL NUMERO ES PERIODICO PURO(p) O PERIODICO MIXTO(m): ";
    cin >> str;

    if (str=="p") {
        string enterostr, decimalstr;
        int entero, decimal, it;
        cout << "INTRODUZCA PARTE ENTERA: ";
        cin >> enterostr;
        entero=stoi(enterostr);
        cout << "INTRODUZCA PARTE DECIMAL PERIODICA: ";
        cin >> decimalstr;
        it = decimalstr.size();
        decimal=stoi(decimalstr);
        cout << pow(10, it)-1;
        int z = (entero*pow(10, it)+decimal)-entero, y=pow(10, it)-1;
        cout << "SU FRACCION ES: " << z << " / " << y;
    } else if (str=="m"){
        string enterostr, decimalpstr, decimalnpstr;
        int entero, decimalnp, decimalp, itnp, itp;
        cout << "INTRODUZCA PARTE ENTERA: ";
        cin >> enterostr;
        entero = stoi(enterostr);
        cout << "INTRODUZCA PARTE DECIMAL NO PERIODICA: ";
        cin >> decimalnpstr;
        itnp = decimalnpstr.size();
        decimalnp = stoi(decimalnpstr);
        cout << "INTRODUZCA PARTE DECIMAL PERIODICA: ";
        cin >> decimalpstr;
        itp = decimalpstr.size();
        decimalp = stoi(decimalpstr);
        
        int z = (entero*pow(10, (itp+itnp))+decimalnp+pow(10, itp)+decimalp)-(entero*pow(10, itnp)+decimalnp), y=(pow(10, (itp+itnp))-pow(10, itnp));
        cout << "SU FRACCION ES: " << z << " / " << y;
    }
    

}
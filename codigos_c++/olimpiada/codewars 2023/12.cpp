#include<bits/stdc++.h>
using namespace std;

int main() {

    int vidas=7;
    string palabra, intento, solucion;
    cin >> palabra >> intento;
    int pal=palabra.length();
    for (int i=0 ; i<pal ; i++) {
        solucion.push_back('_');
    }
    cout << solucion << endl;
    int c=0, inte=intento.length();
    for (int i=0 ; i<inte ; i++) {
        bool b=false;
        for (int j=0 ; j<pal ; j++){
            if (intento[i]==palabra[j]) {
                b=true;
                solucion[j]=palabra[j];
                c++;
            }
        }
        if (b==false) {
            vidas--;
            if (vidas==0) {
                break;
            }
        }
    }
    cout << solucion << endl;
    int sol=solucion.length();
    if (c==sol) {
        cout << "Player wins!" << endl << "Lives: " << vidas;
    } else if (vidas>0) {
        cout << "Word not completed and player is still alive." << endl << "Lives: " << vidas;
    } else {
        cout << "Player loses." << endl << "Lives: " << '0';
    }
}
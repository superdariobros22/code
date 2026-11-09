#include "bits/stdc++.h"

using namespace std;

#define all(a) a.begin(), a.end()
#define ll long long
#define db double
#define mp make_pair
#define pb push_back
#define f first
#define s second
#define pii pair<int, int>

const ll MOD = 1e9 + 7;
const ll MAX = 1e9;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    string x, hora="  ", minuto="  ";
    cin >> x;
    hora[0]=x[0];
    hora[1]=x[1];
    minuto[0]=x[3];
    minuto[1]=x[4];
    int h, m;
    h=stoi(hora);
    m=stoi(minuto);
    if (m>=30) {
        h++;
        m-=30;
    } else m+=30;
    cout << "PELIGRO DE INUNDACION: Evita entrar a sotanos y bajos, evita desplazamientos y busca un lugar alto. La inundación llegara a las " << h << ':';
    if (m<10) cout << '0';
    cout << m;
    
    return 0;
}
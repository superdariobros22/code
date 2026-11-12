#include<bits/stdc++.h>
using namespace std;

int main() {
    string x, h, m;
    cin >> x;
    h=x[0]+x[1];
    m=x[3]+x[4];
    int hora=stoi(h);
    int minuto=stoi(m);
    int minutos=minuto+hora*60;
    int segundos=60*minutos;
    int gol1, gol2;
    cin >> gol1 >> gol2;
    segundos+=(gol1+gol2)*35;
    int sa1, sa2, sa3, sa4;
    cin >> sa1 >> sa2 >> sa3 >> sa4;
    segundos+=(sa1+sa2+sa3+sa4)*10;
    int falta1, falta2;
    cin >> falta1 >> falta2;
    segundos+=(falta1+falta2)*20;
    int le1, le2;
    cin >> le1 >> le2;
    segundos+=(le1+le2)*50;
    int tm1, tm2;
    cin >> tm1 >> tm2;
    segundos+=(tm1+tm2)*60;
    int re1,re2;
    cin >> re1 >> re2;
    segundos+=(re1+re2)*75;
    minutos=segundos/60;
    int horas=minutos/60;
    minutos=minutos%horas;
    cout << horas << ':' << minutos;
}
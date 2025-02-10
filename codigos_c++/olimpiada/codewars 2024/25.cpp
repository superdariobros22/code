#include<bits/stdc++.h>
using namespace std;

vector<vector<float>> blur (vector<vector<float>> img, int filas, int columnas) {
    vector<vector<float>> blur (filas,vector<float>(columnas));
    for (int i=0 ; i<filas ; i++) {
        for (int j=0 ; j<columnas ; j++) {
            float x=0;
            x+=img[i][j]*0.38774;
            if (j>=2) {
                float f=img[i][j-2];
                x+=f*0.06136;
            }
            if (j>=1) {
                float f=img[i][j-1];
                x+=f*0.24477;
            }
            if (j+2<columnas) {
                float f=img[i][j+2];
                x+=f*0.06136;
            }
            if (j+1<columnas) {
                float f=img[i][j+1];
                x+=f*0.24477;
            }
            blur[i][j]=x;
        }
        
    }
    vector<vector<float>> blur2 (filas,vector<float>(columnas));
    for (int i=0 ; i<filas ; i++) {
        for (int j=0 ; j<columnas ; j++) {
            float x=0;
            x+=blur[i][j]*0.38774;
            if (i>=2) {
                float f=blur[i-2][j];
                x+=f*0.06136;
            }
            if (i>=1) {
                float f=blur[i-1][j];
                x+=f*0.24477;
            }
            if (i+2<filas) {
                float f=blur[i+2][j];
                x+=f*0.06136;
            }
            if (i+1<filas) {
                float f=blur[i+1][j];
                x+=f*0.24477;
            }
            blur2[i][j]=x;
        }
        
    }
    return blur2;
}

int main() {
    int n, filas, columnas;
    cin >> n >> filas >> columnas;
    vector<vector<float>> img;
    for (int i=0 ; i<filas ; i++) {
        vector<float> vec;
        for (int j=0 ; j<columnas ; j++) {
            int x;
            cin >> x;
            vec.push_back(x);
        }
        img.push_back(vec);
    }

    for (int i=0 ; i<n ; i++) {
        img=blur(img, filas, columnas);
    }

    for (int i=0 ; i<filas ; i++) {
        for (int j=0 ; j<columnas ; j++) {
            float l=img[i][j];
            int m=l;
            if (l-m>=0.5) {
                img[i][j]=m+1;
            } else {
                img[i][j]=m;
            }
            
        }
        
    }

    for (int i=0 ; i<filas-1 ; i++) {
        for (int j=0 ; j<columnas-1 ; j++) {
            cout << img[i][j] << ' ';
        }
        cout << img[i][columnas-1] << endl;
    }
    for (int j=0 ; j<columnas-1 ; j++) {
        cout << img[filas-1][j] << ' ';
    } cout << img[filas-1][columnas-1];

    
}
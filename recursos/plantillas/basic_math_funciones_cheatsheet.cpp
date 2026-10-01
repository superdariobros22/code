//No sabemos cuando deja de haber input

while(cin >> x)

//Queremos pasar por terminal una cantidad de decimales exacta

cout << fixed << setprecision(x) << num;

//Obtener linea completa

getline(cin, variable)

//LIBRERIA MATH

sqrt(x)

pow(x, y) // x^y

floor(x) //Truncamiento

ceil(x) //Techo

abs(x)

round(x) //Rendondeo decimal

//FUNCIONES INCLUIDAS

__gcd(x, y)

__builtin_popcount(x) //Number of 1 in binary that has this number

memset(array, value, sizeof(array)) //Le pone el mismo valor a toda la array


//FUNCIONES BASICAS

bool prime(int n){
    //true = prime
    //false = otro
    for(int i = 2; i <= (n+1)/2; i++){
        if(n % i == 0) return false;
    }
    return true;
}

vector<int> divisores(int n){
    vector<int> res = {1}
    for(int i = 2; i <= (n+1)/2; i++){
        if(n % i == 0){
            res.push_back(i);
        }
    }
    return res;
}

string remove_spaces(const string& input) {
    string result = "";
    for (char ch : input) {
        if (ch != ' ') {
            result += ch;
        }
    }
    return result;
}

int num_of_digitis(int x){
    return floor(log10(x)) + 1
}
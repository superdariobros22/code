//####### STRINGSTREAM #########

//Para separar una string en espacios de string o en numeros

stringstream ss(input) ;
auto info = ""
while(ss >> info){
    x.push_back(info)
}

//Para unir diferentes valores en una string


stringstream ss;

ss << "My name is: " << name << "And I am " << age << " years old";

string result = ss.str();

//Cambiar de entero a string y viceversa

stringstream ss(string);

ss >> number;

stringstream ss(number);

ss >> string;

//############STRINGS#############

string.push_back(string); // Añade al final

string.pop_back(); // Elimina el ultimo caracter

string.insert(5, string) //Inserta en el indice 5 la string desplaza todo lo demas

string.erase(5, 4) //Elimina 4 posiciones desde el indice 5ç

string.substr(5, 6) //Crea una substring formada por la string que empieza en 5 y acaba en 5 + 6 = 11.


//############VECTORES#################

vector<int> v1;
vector<int> v2(3,5);
vector<int> v3 = {0, 1, 2};

v1.push_back(value)

v1.insert(v.begin() + index, value)

v1.size()

v1.back()

v1.pop_back()

v1.erase(find(v1.begin(), v1.end(), value))

v1.empty() // True or False dependiendo de si esta vacio o no

vector<vector<int>> v4;

v4.resize(3, vector<int>(5, 0)) // 3 = n, numero de filas, 5 = m, numero de columnas, relleno entero con 0

string s = to_string(num);

int n= stoi(s);
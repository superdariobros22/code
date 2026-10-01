//###########FIND#############

result = find(x.begin(), x.end(), y); // Donde y es el valor que buscamos

if(result != x.end()){
    distance(x.begin(), result); // devuelve el indice donde se localiza


}

//############SORT############3

sort(x.begin(), x.end());



//###########COUNT############

count(x.begin(), x.end(), y); // Donde y es el valor a contar

//Devuelve el numero de ocurrencias.



//###############ACCUMULATE#################

accumulate(x.begin(), x.end(), 0); // Suma de todos los elementos de un vector

int op(int a, int b) return a*b;

accumulate(x.begin(), x.end(), 1, op); // 1 es el init y este sera siempre el primer parametro de la funcion q utilicemos para calcular, b sera el segundo valor.



//############UNIQUE################3

ip = unique(x.begin(), x.end()); //Unique reordena los valores en valores unicos y tira para atras los duplicados que se convierten en basura
//ip es el nuevo final logico

x.resize(distance(x.begin(), ip));
// o podemos tambien
x.erase(ip, x.end());

bool fun(int a, int b) {
    if a*b > 20 && b < 5 {
        return True;
    } 
    else{
        return False;
    }
}

unique(x.begin(), x.end(), fun);

//###############REPLACE#################

replace(x.begin(), x.end(), y, z) //Reemplaza y con z

//Tambien se puede utilizar una condicion propia pero con REPLACE_IF

bool fun(int i){
    return (i % 2) == 0;
}

replace_if(x.begin(), x.end(), fun, -1) //reemplaza solo cuando fun da True
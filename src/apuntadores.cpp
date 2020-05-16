#include <iostream>
using namespace std;

int main(){
//datos primitivos
    int var1;
    float var2;
    char var3;

//variables apuntador (memoria)
    int *apt1;
    int * apt2;

/*Operador de direccion
El operador de Direccion (&) regresa la direccion de una variable

Operador de indireccion
(*)Permite definir una variable de tipo puntero
El operador de indireccion (*) toma la direccion de una variable y regresa el dato que contiene esa direccion
*/
    var1=10;
    apt1=&var1;
 //   cout<<var1<<endl;
 //   cout<<&var1<<endl;
    cout<<&var1<<" - "<<apt1<<endl;
    cout<<&apt1<<endl;
 //   system("pause");
    return 0;
}
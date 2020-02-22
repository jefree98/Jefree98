#include <iostream>

// incluimos librerias
using namespace std;

//Definicion de clases
class Calculadora {
    //Definir un metodo publico
    public:
    int Calcular (int,char,int);
};

//metodo principal
int main() {

    //Definir variables
    char chrNombre[10];
    int intNumero1, intNumero2, intResultado;
    Calculadora objCalculadora;
    char chrOperador;

    //Solicitar el nombre
    cout <<"Ingrese su nombre: " <<endl;
    cin>>chrNombre;
/* 
    //Solicitar datos para suma
    cout<<"Ingrese el primer digito: "<<endl;
    cin>>intNumero1;

    cout<<"Ingrese el segundo digito: "<<endl;
    cin>>intNumero2;
*/
    cout<<"Ingrese la operacion a realizar, por ejemplo 1+1"<<endl;
    cin>> intNumero1 >> chrOperador >> intNumero2 ;

    /* Realiza la sumatora
    intResultado = intNumero1 + intNumero2;
    */
    intResultado = objCalculadora.Calcular(intNumero1 ,chrOperador, intNumero2);

    
    //imprimir el dato
    cout <<"Su nombre es: "<<chrNombre<<endl;
    cout<<"El resultadp de su operacion es: "<< intResultado << endl;



    //Retorno valor
    return 0;
}

// Define metodo publico
// :: sirve para llamar a un metodo
int Calculadora::Calcular(int intNumber1, char chrOperator, int intNumber2){
    switch(chrOperator){
        case'+':
            return intNumber1 + intNumber2;
        case'*':
            return intNumber1 * intNumber2;
        case '-':
            return intNumber1 - intNumber2;
        case '/':
            //Validamos diferente a 0
            if (intNumber2 !=0)
                return intNumber1/intNumber2;
        default:
            return 0;
    }
}

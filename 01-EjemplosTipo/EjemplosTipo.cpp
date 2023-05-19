//#include <iostream>
#include <cassert>
#include <string>
using namespace std::literals;

unsigned doble(unsigned);

int main(){

    // asserts booleanos

    assert( not true == false);
    assert( not true != true);
    assert( true and false == false);
    assert( false and false == true);
    assert( false or false == false);
    assert( false or true == true);

    //asserts strings

    assert( "1"s + "1"s == "11"s);
    assert( "H"s + "O"s + "L"s + "A"s == "HOLA"s);
    //assert( "2"s != 2); Error porque compara un char(string) con un entero
    assert( "Hola "s + "a todos!"s == "Hola a todos!"s);
    assert( "13 "s + "1"s != "131"s);
    assert( "13 "s + "1"s == "13 1"s);
    
    //asserts naturales, enteros y reales
    assert( 2+2 == 4);
    assert( 2+2 != 5);
    assert( 3 == 3.0); //compara un int con un double
    assert( (-5) == 5); //toma al -5 como (int 5)
    assert( 35-6 == 29);
    assert( 2.5 + 2.5 == 5);

    //Funciones
    // funcion matematica: N=>N / Doble(n) = 2n
    assert( doble(6) == 12);
    assert( doble(7) == 14);
    assert( doble(1) == 2);
    assert( doble(0) != 1);
    assert( doble(0) == 0);
    assert( doble(2) == 4); //tengo q tener una buena cantidad de asserts porque si me equivocara en la funcion (n+n), esto estaria bien.
    assert( doble(10) == 20);
    assert( doble(10) != 12);

    //Punto extra 6.1

    //Punto extra 6.2
    assert( 10*0.1 == 1.0);
    assert( 10*0.1 != 1.0);
    /*Pueden complilar los dos a la vez creo que porque se tratan de valores reales y 
    por ejemplo double(0.1) = 0.10...056. Entonces matematicamente, al ponerle fin a la coma, puede ser distinto.
    */

}

unsigned doble(unsigned n){ return 2*n;}
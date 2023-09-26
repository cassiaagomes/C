//
// Created by Cássia Gomes on 26/09/23

#include <iostream>

using namespace std;

int main () {

    int varInt = 100;
    char cassia = 'r';
    double pontinho = '5.99';

    cout << "O valor da variavel varInt é: " << varInt << endl;
    cout << "O valor da variavel c é: " << cassia << endl;
    cout << "O valor da variavel pFlutuante é: " << pontinho << endl;
    cout << endl;
    cout << "A memoria da variavel varInt é de" << sizeof (varInt) << endl;
    cout << "A memoria da variavel cassia é de" << sizeof (cassia) << endl;
    cout << "A memoria da variavel pontinho é de" << sizeof (pontinho) << endl;
    return 0;
}
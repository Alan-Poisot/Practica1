#ifndef POLINOMIOS_POLINOMIO_H
#define POLINOMIOS_POLINOMIO_H
#include <vector>
#include <iostream>

using namespace std;
class Polinomio {
private:
    int orden;
    vector <double> coef;
public:
    Polinomio();
    void Derivar();
    void Integrar();
    void sumar(vector<double>* A, int s);
    void getPol();

};


#endif //POLINOMIOS_POLINOMIO_H

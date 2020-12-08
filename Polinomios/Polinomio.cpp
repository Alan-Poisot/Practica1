#include "Polinomio.h"

Polinomio::Polinomio() {
    int n=0;
    double c;
    while (n<1) {
        cout << "Introduzca el grado del polinomio:";
        cin >> n;
    }
    orden=n;
    for (int i = 0; i < n+1; ++i) {
        cout << "Introduzca el coeficiente de x^"<<n-i<<":";
        cin >> c;
        coef.push_back(c);
    }
}

void Polinomio::Derivar() {
    coef.pop_back();
    orden--;
}

void Polinomio::Integrar() {
    orden++;
    coef.push_back(0);
}

void Polinomio::sumar(vector<double>* A, int s) {
    int lim=max(s,orden);
    while (orden<lim){
        orden++;
        coef.insert(coef.begin(),0);
    }
    if (s<lim){
        for (int i = 0; i < s+1; ++i) {
            coef[orden-i]+=(*A)[s-i];
        }
    } else {
        for (int i = 0; i < lim+1; ++i) {
            coef[i]+=(*A)[i];
        }
    }

}

void Polinomio::getPol() {
    for (int i = 0; i < orden; ++i) {
        cout <<coef[i]<<"x^"<<orden-i;
        if (coef[i+1]>=0){
            cout<<"+";
        }
    }
    cout <<coef[orden]<<"\n";
}
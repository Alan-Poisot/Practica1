#include <iostream>
#include <vector>
#include "Polinomio.h"

using namespace std;

vector<double> P;
int main() {
    int x=1,s=0;
    double c;
    Polinomio miPolinomio;
    vector<double> *Ptr;
    while (x!=0){
        cout<<"ingrese la operacion a realizar\n1:integrar\t2:derivar\t3:sumar\t4:imprimir\t0:salir\n";
        cin>>x;
        switch (x) {
            case 0:
                return 0;
            case 1:
                miPolinomio.Integrar();
                break;
            case 2:
                miPolinomio.Derivar();
                break;
            case 3:
                s=0;
                while (s<=0){
                    cout<<"ingrese el grado del polinomio a sumar";
                    cin>>s;
                }
                for (int i = 0; i < s+1; ++i) {
                    cout << "Introduzca el coeficiente de x^"<<s-i<<":";
                    cin >> c;
                    P.push_back(c);
                }
                Ptr=&P;
                miPolinomio.sumar(Ptr,s);
                break;
            case 4:
                miPolinomio.getPol();
                break;

        }
    }

    return 0;
}

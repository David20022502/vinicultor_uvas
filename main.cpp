#include <iostream>
#include <iomanip>
using namespace std;
void invertir(int x);

int main()
{
    double preciouv, totaluvas, preciototal, carga, rebaja;
    int tama;
    string tipo;
    cout << "ingrese el precio del kilo de uva: ";
    cin >> preciouv;
    cout << "ingrese el kilo total de uvas producidas: ";
    cin >> totaluvas;
    cout << "ingrese el tipo deuva a/b: ";
    cin >> tipo;
    cout << "ingrese el tamanio de las uvas 1/2: ";
    cin >> tama;
    if (tipo == "a")
    {
        if (tama == 1)
        {
            preciototal = (preciouv * totaluvas)+0.20;

        }
        if (tama == 2)
        {
            preciototal = (preciouv * totaluvas)+0.30;
            
        }
    }
    if (tipo == "b")
    {
        if (tama == 1)
        {
            preciototal = (preciouv * totaluvas)-0.30;

        }
        if (tama == 2)
        {
            preciototal = (preciouv * totaluvas)-0.50;
        }
    }
    cout << endl;
    cout << "el precio total por las uvas es: " << preciototal << "$" << endl;
    return 0;
}

#include <iostream>
#include <iomanip>
using namespace std;
int main  () {
        int continuar;
do {
        cout << fixed << setprecision(2);
    double n1,n2;
    cin >> n1;
    while (n1 < 0 || n1 > 10) {
            cout << "nota invalida" << endl;
        cin >> n1;
    }

    cin >> n2;
    while (n2 < 0 || n2 > 10) {
            cout << "nota invalida" << endl;
        cin >> n2;
    }

double media = (n1 + n2) / 2;
cout << "media= " << media << endl;
cout << "novo calculo (1-sim 2-nao)" << endl;

    cin >> continuar;
    if(continuar ==2){
             return 0;
    }
    else if (continuar !=1 || continuar !=2) {
            cout << "novo calculo (1-sim 2-nao)" << endl;
        cin >> continuar;
    }

} while (continuar == 1 );

return 0;
}

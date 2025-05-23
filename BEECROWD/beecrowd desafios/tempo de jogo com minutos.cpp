#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int horas, hinicio, minicio;
    int minutos, hfim, mfim;

    cin >> hinicio >> minicio >> hfim >> mfim;

    if (hinicio == hfim && minicio == mfim) {
        horas = 24;
        minutos = 0;
    }
    else if (hinicio < hfim || (hinicio == hfim && minicio < mfim)) {
        horas = hfim - hinicio;
        minutos = mfim - minicio;

        if (minutos < 0) {
            minutos += 60;
            horas--;
        }
    }
    else {
        horas = (24 - hinicio) + hfim;
        minutos = mfim - minicio;

        if (minutos < 0) {
            minutos += 60;
            horas--;
        }
    }
    cout << "O JOGO DUROU " << horas << " HORA(S) E " << minutos << " MINUTO(S)" << endl;
    return 0;
}

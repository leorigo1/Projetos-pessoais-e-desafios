#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main () {
string lixo;
int diainicio, hinicio, minicio, sinicio;
int diafinal, hfinal, mfinal, sfinal;

cin >> lixo >> diainicio;
cin >> hinicio >> lixo >> minicio >> lixo >> sinicio;
cin >> lixo >> diafinal;
cin >> hfinal >> lixo >> mfinal >> lixo >> sfinal;

int iniciosegundos = (diainicio * 86400) + (hinicio * 3600) + (minicio * 60) + sinicio;
int fimsegundos = (diafinal * 86400) + (hfinal * 3600) + (mfinal * 60) + sfinal;

int total = fimsegundos - iniciosegundos;
int resto;

int dia = total / 86400;
total = total % 86400;
int horas = total / 3600;
total = total % 3600;
int minutos = total / 60;
total = total % 60;
int segundos = total;

cout << dia << " dia(s)" << endl;
cout << horas << " hora(s)" << endl;
cout << minutos << " minuto(s)" << endl;
cout << segundos << " segundo(s)" << endl;

return 0;
}

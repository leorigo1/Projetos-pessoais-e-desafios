#include <iostream>
#include <iomanip>
using namespace std;
int main () {

double salario, reajuste, novosalario;
cin >> salario;
cout << fixed << setprecision(2);


if (salario <= 400.00) {
reajuste = (salario * 0.15);
novosalario = reajuste + salario;
cout << "Novo salario: " << novosalario << endl;
cout << "Reajuste ganho: " << reajuste << endl;
cout << "Em percentual: 15 %" << endl;
}


if (salario > 400.00 && salario <= 800.00) {
reajuste = (salario * 0.12);
novosalario = reajuste + salario;
cout << "Novo salario: " << novosalario << endl;
cout << "Reajuste ganho: " << reajuste << endl;
cout << "Em percentual: 12 %" << endl;
}


if (salario > 800.00 && salario <= 1200.00) {
reajuste = (salario * 0.10);
novosalario = reajuste + salario;
cout << "Novo salario: " << novosalario << endl;
cout << "Reajuste ganho: " << reajuste << endl;
cout << "Em percentual: 10 %" << endl;
}

if (salario > 1200.00 && salario <= 2000.00) {
reajuste = (salario * 0.07);
novosalario = reajuste + salario;
cout << "Novo salario: " << novosalario << endl;
cout << "Reajuste ganho: " << reajuste << endl;
cout << "Em percentual: 7 %" << endl;
}

if (salario > 2000.00) {
reajuste = (salario * 0.04);
novosalario = reajuste + salario;
cout << "Novo salario: " << novosalario << endl;
cout << "Reajuste ganho: " << reajuste << endl;
cout << "Em percentual: 4 %" << endl;
}

return 0;
}

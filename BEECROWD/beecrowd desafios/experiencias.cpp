#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main () {
int i,valor,total;
int coelho = 0, rato = 0, sapo = 0;
string animal;
int quantia;
double porcentagemcoelho, porcentagemrato, porcentagemsapo;
cin >> valor;
for (i=1; i <= valor; i++) {
cin >> quantia >> animal;


if (animal =="C") {
   coelho += quantia;
}
else if (animal =="R") {
    rato += quantia;
}
else if (animal =="S") {
    sapo += quantia;
}
}
total = rato + coelho + sapo;

porcentagemcoelho = (static_cast<double>(coelho) / total) * 100;
porcentagemrato = (static_cast<double>(rato) / total) * 100;
porcentagemsapo = (static_cast<double>(sapo) / total) * 100;
cout << "Total: " << total  << " cobaias" << endl;
cout << "Total de coelhos: " << coelho << endl;
cout << "Total de ratos: " << rato << endl;
cout << "Total de sapos: " << sapo << endl;
cout << fixed << setprecision(2);
cout << "Percentual de coelhos: " << porcentagemcoelho << "%" << endl;
cout << "Percentual de ratos: " << porcentagemrato <<  "%" << endl;
cout << "Percentual de sapos: " << porcentagemsapo <<  "%" << endl;
return 0;
}

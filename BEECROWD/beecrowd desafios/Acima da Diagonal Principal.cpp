#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
int main () {
string operacao;
double valores;
double soma = 0,media = 0;
cin >> operacao;

for (int i = 1; i<=144; i++) {
    cin >> valores;
    if (operacao == "S") {
        soma += valores;
    }

        else if (operacao == "M") {
        media += valores;
    }
}

  if (operacao == "S") {
        cout << fixed << setprecision(1) <<  soma << endl;
    } else if (operacao == "M") {
        media /= 144;
        cout << fixed << setprecision(1) << media << endl;
    }
return 0;
}

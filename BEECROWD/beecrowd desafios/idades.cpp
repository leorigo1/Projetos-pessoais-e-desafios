#include <iostream>
#include <iomanip>
using namespace std;
int main () {
double valor,totalvalor,valores;
int total = 0;
do {
    cin >> valor;

    if (valor < 0) {
      total--;
        cout << fixed << setprecision(2);
cout << totalvalor << endl;
    return 0;
  }

    valores +=valor;
    total++;
  totalvalor = valores / total;

} while (valor > 0);

return 0;
}

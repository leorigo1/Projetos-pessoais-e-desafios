#include <iostream>
#include <iomanip>
using namespace std;
int main () {
int valor;
cin >> valor;
for (int i=1; i<=valor;i++) {
  int x,y;
    cin >> x >> y;

    if (y==0) {
        cout << "divisao impossivel" << endl;
        continue;
    }
cout << fixed << setprecision(1);

    double operacao = static_cast<double>(x) / y;
    cout << operacao << endl;

}

return 0;
}

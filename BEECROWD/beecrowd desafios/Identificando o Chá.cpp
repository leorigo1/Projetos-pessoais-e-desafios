#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main () {
int secreto,a,b,c,d,e;
int resultado;
int contador = 0;


cin >> secreto;
cin >> a >> b >> c >> d >> e;

if (a || b || c || d || e == secreto){
    contador++;
    }

  cout << contador << endl;

return 0;
}

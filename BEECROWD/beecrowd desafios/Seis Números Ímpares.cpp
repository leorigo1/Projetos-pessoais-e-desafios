#include <iomanip>
#include <iostream>
#include <cmath>
using namespace std;
int main () {
int valor,i;
cin >> valor;

if(valor %2 ==0) {
 valor++; }

  for (int i = 0; i < 6; i++) {
        cout << valor << endl;
        valor += 2; }
return 0;
}

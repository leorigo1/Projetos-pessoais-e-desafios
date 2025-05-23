#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main () {
int n,valor,resultado;
cin >> n;
for (int i=0; i <n; i++) {
    cin >> valor;

     if (valor > 0 && valor %2 == 0){
    resultado =1;
     }

    else if (valor > 0 && valor %2 != 0){
            resultado =2;
     }

    else if (valor < 0 && valor %2 == 0){
            resultado =3;
     }

   else if (valor < 0 && valor %2 != 0){
        resultado =4;
     }
     else if (valor == 0){
    resultado =5;
     }

    switch (resultado) {
    case 1:
    cout << "EVEN POSITIVE" << endl;
break;
    case 2:
    cout << "ODD POSITIVE" << endl;
break;
    case 3:
    cout << "EVEN NEGATIVE" << endl;
break;
    case 4:
    cout << "ODD NEGATIVE" << endl;
break;
    case 5:
    cout << "NULL" << endl;
    break;
    }
}
return 0;
}

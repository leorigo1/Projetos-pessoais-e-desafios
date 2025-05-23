#include <iostream>
#include <locale>
using namespace std;
int main () {
int valor,salto;
setlocale(LC_ALL,"Portuguese");
cout << "Quer contar até quanto?" << endl;
cin >> valor;
cout << "Quer contar com que salto?" << endl;
cin >> salto;
system ("cls");
for (int i=0; i<=valor; i+=salto) {

    cout << i << endl;
}

return 0;
}

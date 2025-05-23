#include <iostream>
#include <iomanip>
using namespace std;
int main () {
    cout << fixed << setprecision(2);
double quantidade;
int codigo;
cin >> codigo >> quantidade;

switch (codigo) {
case 1:
cout << "Total: R$ " << 4.00 * quantidade << endl;
break;
case 2:
cout << "Total: R$ " << 4.50 * quantidade << endl;
break;
case 3:
cout << "Total: R$ " << 5.00 * quantidade << endl;
break;
case 4:
cout << "Total: R$ " << 2.00 * quantidade << endl;
break;
case 5:
cout << "Total: R$ " << 1.50 * quantidade << endl;
break;
}
return 0;
}

#include <iostream>
#include <iomanip>
using namespace std;
int main () {
int a = 2;
int b = 3;
int c = 2;
int d = 5;

double e = 1.5;
double f = 2.5;
double g = 3.5;

int conta;

conta = (a * b + c / d - e + f);
cout << fixed << setprecision(2);

cout << conta << endl;

return 0;
}

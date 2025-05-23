#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main () {

double A,B,C, soma;
cin >> A >> B >> C;
soma = (A*2 + B*3 + C*5) / 10;
cout << fixed << setprecision(1) << "MEDIA = " << soma << endl;
}

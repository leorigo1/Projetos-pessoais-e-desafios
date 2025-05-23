#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main () {
    cout << fixed << setprecision(5);
double a,b,c,delta,r1,r2;
cin >> a >> b >> c;

if (a <= 0) {
 cout << "Impossivel calcular " << endl;
 return 0;
}
delta = pow(b,2) -(4 *(a * c));

if (delta <= 0) {
 cout << "Impossivel calcular " << endl;
 return 0;
}

if (delta > 0 or a > 0){
r1 = (-b + sqrt(delta)) / (2 * a);
r2 = (-b - sqrt(delta)) / (2 * a);
cout << "R1 = " << r1 << endl;
cout << "R2 = " << r2 << endl;
return 0;
}

return 0;
}

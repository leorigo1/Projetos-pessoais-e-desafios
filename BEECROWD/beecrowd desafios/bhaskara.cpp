#include <cmath>
#include <iostream>
#include <iomanip>
using namespace std;
int main () {
double a,b,c,r1,r2,delta;

cin >> a >> b >> c;
delta= pow(b,2) - (4 * a * c);

if (delta == 0) {
    cout << "Impossivel calcular" << endl;
    return 0;
    }
if (delta < 0) {
cout << "Impossivel calcular" << endl;
return 0;
}

if (a == 0) {
        cout << "Impossivel calcular" << endl;
        return 0;
}
else {
r2 = (-b-sqrt(delta)) / (2*a);
r1 = (-b+sqrt(delta)) / (2*a);

cout << fixed << setprecision(5) << "R1 = " << r1 << endl;
cout << fixed << setprecision(5) << "R2 = " << r2 << endl;
}

return 0;
}

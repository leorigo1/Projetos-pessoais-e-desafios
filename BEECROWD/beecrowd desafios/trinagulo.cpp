#include <iostream>
#include <iomanip>
using namespace std;
int main () {
double a,b,c, triangulo,area;
cout << fixed << setprecision(1);
cin >> a >> b >> c;
if (c + b > a && c + a > b && a + b > c) {
triangulo = a + b + c;
cout << "Perimetro = " << triangulo << endl;
}
else {
area = ((a + b)*c)/2  ;
cout << "Area = " << area << endl;

}

return 0;
}

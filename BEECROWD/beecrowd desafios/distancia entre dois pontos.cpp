#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main () {
double x1,x2,y1,y2;
cin >> x1 >> y1;
cin >> x2 >> y2;
cout << fixed << setprecision(4);

double xx = x2 - x1;
double yy = y2 - y1;
double distancia = sqrt (pow(xx,2) + pow(yy,2));

cout << distancia << endl;
return 0;
}

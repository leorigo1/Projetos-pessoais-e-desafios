#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main () {
int n;
cin >> n;

double fibonacc = (pow((1+sqrt(5)) / 2,n)) - (pow((1-sqrt(5)) / 2,n));
double fibonacci = fibonacc / (sqrt(5));

cout << fixed << setprecision(1);
cout << fibonacci << endl;

return 0;
}

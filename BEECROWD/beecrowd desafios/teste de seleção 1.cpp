#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main () {
int a,b,c,d;
bool bc,da,cd,ab;
cin >> a >> b >> c >> d;

if (a%2==0 && b>c && d>a && c+d > a+b && c >0 && d > 0) {
cout << "Valores aceitos" << endl;
}
else {
    cout << "Valores nao aceitos" << endl;
}
return 0;
}

#include <iostream>
#include <iomanip>
using namespace std;
int main () {
double s =1;
for (int i=2; i<=100;i++) {
    double j =  1.0 / i;
    s = s + j;
}
cout << fixed << setprecision(2);
cout << s << endl;

return 0;
}

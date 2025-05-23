#include <iostream>
#include <iomanip>
using namespace std;
int main() {

int n1,n2,n3,n4,n5;
double idade;
cin >> n1 >> n2 >> n3 >> n4 >> n5;

idade = (n1+n2+n3+n4+n5)/5.0;
if (n1 <= 0 || n2 <= 0 || n3 <= 0 || n4 <= 0 || n5 <= 0)
return 1;

cout << idade << endl;


return 0;
}

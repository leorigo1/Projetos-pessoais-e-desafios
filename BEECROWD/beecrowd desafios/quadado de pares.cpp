#include <iostream>
#include <cmath>
using namespace std;
int main () {
int n,quadrado;
cin >> n;
for (int i= 1; i <=n; i++) {   /// inicia no 1 e termina no n caso (n) seja par)

if (i % 2 == 0) {   ///verifica se (i) é par
quadrado= pow(i,2);
cout << i << "^2 = " << quadrado << endl;
}
}
return 0;
}

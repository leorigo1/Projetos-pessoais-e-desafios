#include <iostream>
#include <iomanip>
using namespace std;
int main () {
int n1,n2,n3,maior,menor,meio;
cin >> n1 >> n2 >> n3;
maior = max(n1, max(n2,n3));
menor = min(n1, min(n2,n3));
meio = (n1 + n2 + n3) - menor - maior;
cout << menor << endl;
cout << meio << endl;
cout << maior << endl;
cout << "" << endl;
cout << n1 << endl;
cout << n2 << endl;
cout << n3 << endl;
return 0;
}

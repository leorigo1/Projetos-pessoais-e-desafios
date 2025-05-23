#include <iostream>
using namespace std;
int main () {
int valor;

do{

cin >> valor;
if (valor == 0) {
    return 0;
}


    int aa = 0;
    int bb = 0;

for (int i=1; i<=valor;i++) {
    int a,b;
    cin >> a >> b;

    if (a > b) {
        aa++;
    }

    if (a < b) {
        bb++;
    }
}
cout << aa << " " << bb;
cout << endl;
} while (valor > 0 && valor <=10);


return 0;
}

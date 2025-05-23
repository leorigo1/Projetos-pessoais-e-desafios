#include <iostream>
using namespace std;
int main () {
int valor;
cin >> valor;
    int quantidade = 0;
for (int i=1;i <=valor; i++) {
        int n;
        cin >> n;

    if (n > quantidade) {
        quantidade++;
    }
}
            cout << quantidade << endl;
return 0;
}

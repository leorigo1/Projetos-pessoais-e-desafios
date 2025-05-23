#include <iostream>
using namespace std;
int main () {
int x,y;
int soma = 0;
cin >> x >> y;

    /// Garante que x seja o menor e y o maior
 if (x > y) {
        int temp = x;
        x = y;
        y = temp;
    }

/// Soma dos números ímpares entre x e y
for (int i = x + 1; i < y; i++) {
    if (i % 2 != 0) {     /// Se for ímpar
        soma += i;
    }
}
cout << soma << endl;
return 0;
}

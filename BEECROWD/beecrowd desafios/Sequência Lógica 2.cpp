#include <iostream>
using namespace std;

int main() {
    int x, y;
    cin >> x >> y;

    for (int i = 1; i <= y; i++) {
        cout << i;
        if (i % x == 0) {
            cout << endl;  // nova linha a cada y n�meros
        } else if (i != x) {
            cout << " ";   // espa�o entre os n�meros, exceto no �ltimo
        }
    }

    return 0;
}

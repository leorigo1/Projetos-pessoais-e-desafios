#include <iomanip>
#include <iostream>
using namespace std;

int main() {
    float nota1, nota2, media;
    while (true) {
        cin >> nota1;
        if (nota1 >= 0 && nota1 <= 10) {
            break;
        } else {
            cout << "nota invalida" << endl;
        }
    }

    while (true) {
        cin >> nota2;
        if (nota2 >= 0 && nota2 <= 10) {
            break;
        } else {
            cout << "nota invalida" << endl;
        }
    }

    media = (nota1 + nota2) / 2;
    cout << fixed << setprecision(2);
    cout << "media = " << media << endl;

    return 0;
}

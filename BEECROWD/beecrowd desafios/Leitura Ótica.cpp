#include <iostream>
using namespace std;

int main() {
    int quantidade;

do {
cin >> quantidade;

for (int i = 0; i < quantidade; i++) {
int a, b, c, d, e;
cin >> a >> b >> c >> d >> e;

int marcadas = 0;
char resposta;

if (a <= 127) {
    marcadas++;
    resposta = 'A';
}
if (b <= 127) {
    marcadas++;
    resposta = 'B';
}
if (c <= 127) {
    marcadas++;
    resposta = 'C';
}
if (d <= 127) {
    marcadas++;
    resposta = 'D';
}
if (e <= 127) {
    marcadas++;
    resposta = 'E';
}

if (marcadas == 1) {
    cout << resposta << endl;
} else {
    cout << "*" << endl;
}
}

} while (quantidade != 0);

return 0;
}

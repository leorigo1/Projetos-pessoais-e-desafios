#include <iostream>
using namespace std;
int main () {
int inte, grem, continuar;
int inter = 0, empate = 0, gremio = 0, total = 0;

do {

cin >> inte >> grem;

if (inte > grem)
    inter++;

else if (inte == grem)
    empate++;

else if (inte < grem)
    gremio++;

    total++;

cout << "Novo grenal (1-sim 2-nao)" << endl;
cin >> continuar;

} while (continuar ==1);

cout << total << " grenais" << endl;
cout << "Inter:" << inter << endl;
cout << "Gremio:" << gremio << endl;
cout << "Empates:" << empate << endl;
if (gremio > inter) {
    cout << "Gremio venceu mais" << endl;
}
else {
    cout << "Inter venceu mais" << endl;
}
return 0;
}

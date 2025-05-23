#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

while (N--) {
int K;
cin >> K;

for (int i = 0; i < K; i++) {
    int categoria;
    cin >> categoria;

if (categoria == 1) {
cout << "Rolien" << endl;
}
else if (categoria == 2) {
    cout << "Naej" << endl;
}
else if (categoria == 3) {
    cout << "Elehcim" << endl;
}
else if (categoria == 4) {
    cout << "Odranoel" << endl;
}
}
}
return 0;
}

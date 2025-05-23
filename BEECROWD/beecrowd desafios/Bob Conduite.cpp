#include <iostream>
using namespace std;

int main() {

int valor;
cin >> valor;

for (int i=1; i<=valor; i++) {
    int vala,valb;
    cin >> vala >> valb;

    int result = vala + valb;

    cout << result << endl;
}


return 0;
}


#include <iostream>
using namespace std;
int main () {

int n1,n2;
cin >> n1 >> n2;

if (n1 == 1 && n2 == 0) {
    cout << "B" << endl;
}

else if (n1 == 0 && n2 == 0) {
    cout << "C" << endl;
}

else if (n1 == 1 && n2 == 1) {
    cout << "A" << endl;
}

return 0;
}

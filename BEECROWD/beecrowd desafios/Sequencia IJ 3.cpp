#include <iostream>
using namespace std;

int main() {
    for (double I = 0, J = 1; I<=2; I += 0.2, J += +0.2) {
            if (I==2) {
                break;
            }
        cout << "I=" << I << " J=" << J << endl;
         cout << "I=" << I << " J=" << J+1 << endl;
          cout << "I=" << I << " J=" << J+2 << endl;

    }
    return 0;
}

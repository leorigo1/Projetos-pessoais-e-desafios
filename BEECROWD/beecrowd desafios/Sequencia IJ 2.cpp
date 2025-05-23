#include <iostream>
using namespace std;

int main() {
    for (int I = 1, J = 7; I<=9, J >= 0; I += 2, J = J) {
            if (I==11) {
                break;
            }

        cout << "I=" << I << " J=" << J << endl;
         cout << "I=" << I << " J=" << J-1 << endl;
          cout << "I=" << I << " J=" << J-2 << endl;

    }
    return 0;
}

#include <iostream>
using namespace std;

int main() {
int x;

while (true) {
    cin >> x;
    if (x == 0)
    break;

    for (int i = 1; i <= x; i++) {
    if (i > 1)
    cout << " ";
    cout << i;
}
    cout << endl;
}

    return 0;
}

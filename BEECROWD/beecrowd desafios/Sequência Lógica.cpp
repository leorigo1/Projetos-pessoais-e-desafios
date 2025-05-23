#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    for (int i = 1; i <= n; i++) {
        int quad = i * i;
        int cubo = i * i * i;

        cout << i << " " << quad << " " << cubo << endl;
        cout << i << " " << quad + 1 << " " << cubo + 1 << endl;
    }

    return 0;
}

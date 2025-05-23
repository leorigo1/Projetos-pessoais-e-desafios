#include <iostream>
using namespace std;

int main() {
    int M, N;

while (true) {
    cin >> M >> N;

if (M == 0 && N == 0) break;

if (M >= 1 && M <= 5 && N >= 1 && N <= 5) {
    cout << M + N << endl;
}
}

    return 0;
}

#include <iostream>
using namespace std;

int main() {
    int k;
    int x, y;
    int xi, yi;

do {
    cin >> k;
if (k == 0) break;

    cin >> x >> y;

for (int i = 0; i < k; i++) {
    cin >> xi >> yi;

if (xi == x || yi == y) {
    cout << "divisa" << endl;
}
    else if (xi > x && yi > y) {
    cout << "NE" << endl;
}
else if (xi < x && yi > y) {
    cout << "NO" << endl;
}
else if (xi < x && yi < y) {
    cout << "SO" << endl;
}
else if (xi > x && yi < y) {
    cout << "SE" << endl;
}
}
} while (k != 0);

return 0;
}

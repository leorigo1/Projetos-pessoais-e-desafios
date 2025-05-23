#include <iostream>
using namespace std;
int main () {
int n;

cin >> n;
for (int i=1; i<=n;i++) {
         int x, y, total = 0;
    cin >> x >> y;
    if (y<x) {
        swap (x,y);
    }

    for (int j = x + 1; j < y; j++) {
            if (j % 2 != 0) {
                total += j;

            }}
    cout << total << endl;
}

return 0;
}

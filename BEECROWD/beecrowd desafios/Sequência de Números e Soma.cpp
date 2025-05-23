#include <iostream>
using namespace std;
int main () {
int m,n;
for (int i=1; ;i++) {
    cin >> m >> n;

        if (m <= 0 || n <=0 ) {
        return 0;
    }

    if (m>n) {
        swap (m,n);
    }
int total = 0;
for (int j=m; j<=n; j++) {
total = total + j;
    cout << j << " ";
}
cout << "Sum=" << total << endl;
}
return 0;
}

#include <iostream>
#include <cmath>
using namespace std;

int main () {

int n;
cin >> n;
int cal = 1;

for (int i=1; i<=n; i++) {

    cout << cal << " " << pow(cal,2) << " " << pow(cal,3) << endl;

    cal +=1;

}

return 0;
}

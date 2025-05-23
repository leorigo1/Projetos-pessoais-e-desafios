#include <iostream>
using namespace std;
int main () {
for (int i=1; ;i++) {
int x,y;
cin >> x >> y;

    if (x==0 || y==0) {
        return 0;
    }

    if (x>0 && y>0) {
        cout << "primeiro" << endl;
    }

     if (x<0 && y>0) {
        cout << "segundo" << endl;
    }

     if (x<0 && y<0) {
        cout << "terceiro" << endl;
    }

     if (x>0 && y<0) {
        cout << "quarto" << endl;
    }

}
return 0;
}

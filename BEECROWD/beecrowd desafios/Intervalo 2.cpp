#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main () {
int num,valores;
int in = 0, out = 0;
cin >> num;
for (int i =1; i <=num; i++) {
cin >> valores;

if (valores >=10 && valores <=20){
   in++;
}

else if (valores >20 || valores <10){
    out++;
}
}
    cout << in << " in" << endl;
    cout << out << " out" << endl;
return 0;
}

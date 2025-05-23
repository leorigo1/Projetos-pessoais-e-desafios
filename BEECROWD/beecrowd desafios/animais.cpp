#include <iostream>
#include <iomanip>
using namespace std;

int main () {
    char resposta1,resposta2,resposta3, vertebrado, invertebrado;
    char ave, mamifero, inseto, anelideo;

    cin >> resposta1;

if (resposta1 == vertebrado) {
vertebrado = 1;
cin >> resposta2;
}

if (resposta1 == invertebrado) {
invertebrado = 2;
cin >> resposta2;
}

switch(resposta1){
case 1:
resposta2 = ave || mamifero;
break;

case 2:
resposta2 = inseto || anelideo;
break;

}


    return 0;
}











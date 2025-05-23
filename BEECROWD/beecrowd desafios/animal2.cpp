#include <iostream>
#include <iomanip>
using namespace std;
int main () {
string v1,v2,v3;
cin >> v1 >> v2 >> v3;

if (v1 == "vertebrado" && v2== "ave" && v3== "carnivoro") {
    cout << "aguia" << endl;
    return 0;
}
if (v1 == "vertebrado" && v2== "ave" && v3== "onivoro") {
    cout << "pomba" << endl;
    return 0;
}
if (v1 == "vertebrado" && v2== "mamifero" && v3== "onivoro") {
    cout << "homem" << endl;
    return 0;
}
if (v1 == "vertebrado" && v2== "mamifero" && v3== "herbivoro") {
    cout << "vaca" << endl;
    return 0;
}

if (v1 == "invertebrado" && v2== "inseto" && v3== "hematofago") {
    cout << "pulga" << endl;
    return 0;
}
if (v1 == "invertebrado" && v2== "inseto" && v3== "herbivoro") {
    cout << "lagarta" << endl;
    return 0;
}
if (v1 == "invertebrado" && v2== "anelideo" && v3== "hematofago") {
    cout << "sanguessuga" << endl;
    return 0;
}
if (v1 == "invertebrado" && v2== "anelideo" && v3== "onivoro") {
    cout << "minhoca" << endl;
    return 0;
}
}

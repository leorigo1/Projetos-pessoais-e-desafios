#include <iostream>
#include <locale>
#include <string>
using namespace std;
int main () {

int nota = 0,quantidade,maiornota = -1;
string nome,melhoraluno;


setlocale (LC_ALL,"Portuguese");
cout << "----------------------" << endl;
cout << "ESCOLA SANTA PACIÊNCIA" << endl;
cout << "----------------------" << endl;
cout << "" << endl;
cout << "Quantos alunos sua turma possui?" << endl;
cin >> quantidade;


for (int i=0; i<quantidade; i++) {
        cout << "" << endl;
cout << "Digite o nome do aluno" << endl;
cin.ignore();
getline (cin,nome);
cout << "Digite a nota do aluno" << endl;
cin >> nota;

if (nota > maiornota) {
    maiornota = nota;
    melhoraluno = nome;
} }
system("cls");
cout << "O aluno: " << melhoraluno << " Obteve a maior nota: " << maiornota << endl;
return 0;
}

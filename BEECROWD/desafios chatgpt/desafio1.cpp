#include <iostream>
#include <string>
#include <locale>
using namespace std;

string alunos [10];
int quantidade = 0;
double media [10];

void cadastrar() {
system("cls");
    if(quantidade >=10) {
        cout << "Limite atingido" << endl;
        return;
    }
    string nome;
    int nota1, nota2;
    cout << endl;
    cout << "Digite o nome do aluno:" << endl;
getline(cin, nome);
    cout << "Digite as 2 notas desse aluno:" << endl;
    cin >> nota1 >> nota2;

      alunos[quantidade] = nome;
media[quantidade]  = (nota1 + nota2) / 2.0;
quantidade++;
cout << "Aluno cadastrado com sucesso!" << endl;
}


void listaralunos () {
system("cls");
if (quantidade == 0) {
    cout << "Não há alunos registrados!" << endl;
}
else {
cout << "Listagem de alunos" << endl;

for (int i = 0; i < quantidade; i++) {
    cout << i+1 << "." << alunos[i] <<" e sua nota foi:" << media[i] << endl;
}
}
}


void notas () {
system ("cls");
if (quantidade ==0) {
    cout << "Não há notas para exibir!!" << endl;
}
else {
      double mediageral;
    double soma = 0;
    for (int i=0; i<quantidade;i++) {
        soma = soma + media[i];
    }
mediageral = soma / quantidade;
cout << "A media geral da turma foi: " << mediageral << endl;
}
}


int main () {
setlocale (LC_ALL,"Portuguese");
int opcao;

do {
cout << "     --Menu--" << endl;
cout << "1. Cadastrar aluno" << endl;
cout << "2. Listar alunos" << endl;
cout << "3. Mostrar média geral" << endl;
cout << "4. Sair" << endl;
cout << "Escolha uma opção:" << endl;
cin >> opcao;

switch (opcao) {
case 1 :
cadastrar();
    break;

case 2 :
listaralunos();
    break;

case 3 :
notas();
break;

case 4 :
    system("cls");
    cout << "Encerrando..." << endl;
    break;

default:
    cout << "Opção inválida! Tente novamente." << endl;
}
}while (opcao !=4);
return 0;
}

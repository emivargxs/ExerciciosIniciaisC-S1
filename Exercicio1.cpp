/*Usando a linguagem C++, escreva um programa que permita armazenar o nome, a altura
e a data de nascimento de até 10 pessoas. Cada pessoa deve ser representada por uma
struct dentro de um vetor. A data de nascimento também deve ser uma struct que
contém os campos dia, mês e ano. O programa deve iniciar perguntando se o usuário
deseja inserir uma pessoa no sistema (respeitando o limite de 10 pessoas), lendo as suas
informações em caso positivo. O nome, a altura e a data de nascimento de cada pessoa
devem ser informados pelo teclado. Caso o usuário não queira mais inserir pessoas ou caso
o limite de 10 pessoas tenha sido atingido, o programa deverá ler a data do dia de hoje e
mostrar a lista das pessoas (ordenada pelo nome de forma crescente) com o seu nome,
altura e idade (considerando a data fornecida como referência para o dia de hoje).*/

#include <iostream>

using namespace std;


typedef struct {
    char nome;
    int altura;
    double nascimento;
} pessoa_t;

int main(){
    cout << "Insira seu nome:" << endl;
    cin >> nome;


    return 0;
}
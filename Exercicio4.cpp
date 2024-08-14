#include <iostream>
#include <string>  // Para usar o tipo string

using namespace std;

int main() {
    string nome1, nome2;

    // Ler os dois nomes
    cout << "Digite o primeiro nome: ";
    getline(cin, nome1);  // Usa getline para permitir nomes com espaços
    cout << "Digite o segundo nome: ";
    getline(cin, nome2);  // Usa getline para permitir nomes com espaços

    // Comparar os nomes e imprimir em ordem alfabética
    if (nome1 < nome2) {
        cout << "Nomes em ordem alfabética:" << endl;
        cout << nome1 << endl;
        cout << nome2 << endl;
    } else {
        cout << "Nomes em ordem alfabética:" << endl;
        cout << nome2 << endl;
        cout << nome1 << endl;
    }

    return 0;  // Encerra o programa com sucesso
}

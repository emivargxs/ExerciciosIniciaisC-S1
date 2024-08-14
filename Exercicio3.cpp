#include <iostream>

using namespace std;

int main() {
    int numeroMaximo;

    // Solicita ao usuário o número máximo, que deve ser ímpar
    cout << "Digite um número máximo (ímpar): ";
    cin >> numeroMaximo;

    // Verifica se o número máximo é ímpar
    if (numeroMaximo % 2 == 0) {
        cout << "O número deve ser ímpar!" << endl;
        return 1;  // Encerra o programa com código de erro
    }

    // Gera a saída no formato desejado
    for (int i = 1; i <= numeroMaximo; i++) {
        // Imprime os números da linha
        for (int j = i; j <= numeroMaximo; j++) {
            cout << j << " ";
        }
        cout << endl;  // Move para a próxima linha
    }

    return 0;  // Encerra o programa com sucesso
}

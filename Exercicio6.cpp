#include <iostream>
#include <cstring>  // Para funções relacionadas a strings

using namespace std;

// Função para remover um caractere da string na posição fornecida
void removerCaractere(char str[], int pos) {
    int comprimento = strlen(str);  // Obtém o comprimento da string

    // Verifica se a posição está dentro do intervalo válido
    if (pos < 0 || pos >= comprimento) {
        cout << "Posição inválida!" << endl;
        return;
    }

    // Desloca todos os caracteres após a posição para a esquerda
    for (int i = pos; i < comprimento - 1; i++) {
        str[i] = str[i + 1];
    }

    // Adiciona o caractere nulo no final da string
    str[comprimento - 1] = '\0';
}

int main() {
    char str[100];
    int pos;

    // Lê a string do usuário
    cout << "Digite a string (maximo de 99 caracteres): ";
    cin.getline(str, 100);  // Lê uma linha de até 99 caracteres e armazena em str

    // Lê a posição do caractere a ser removido
    cout << "Digite a posição do caractere a ser removido: ";
    cin >> pos;

    // Remove o caractere na posição fornecida
    removerCaractere(str, pos);

    // Exibe a string resultante
    cout << "String após remoção: " << str << endl;

    return 0;
}

#include <iostream>
#include <cstdlib>  // Para a função std::abs

using namespace std;

// Função para substituir todos os números negativos na matriz por seus módulos
void substituirNegativosPorModulo(int matriz[][3], int linhas, int colunas) {
    // Itera sobre cada elemento da matriz
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            // Substitui o valor negativo pelo seu módulo
            if (matriz[i][j] < 0) {
                matriz[i][j] = abs(matriz[i][j]);
            }
        }
    }
}

// Função para imprimir a matriz
void imprimirMatriz(int matriz[][3], int linhas, int colunas) {
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            cout << matriz[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    const int LINHAS = 3;
    const int COLUNAS = 3;
    int matriz[LINHAS][COLUNAS];

    // Leitura dos elementos da matriz
    cout << "Digite os elementos da matriz (" << LINHAS << "x" << COLUNAS << "):" << endl;
    for (int i = 0; i < LINHAS; i++) {
        for (int j = 0; j < COLUNAS; j++) {
            cout << "Elemento [" << i << "][" << j << "]: ";
            cin >> matriz[i][j];
        }
    }

    // Substitui os negativos por seus módulos
    substituirNegativosPorModulo(matriz, LINHAS, COLUNAS);

    // Imprime a matriz modificada
    cout << "Matriz após substituir os negativos por seus módulos:" << endl;
    imprimirMatriz(matriz, LINHAS, COLUNAS);

    return 0;
}

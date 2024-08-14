#include <iostream>
#include <limits>  // Para std::numeric_limits

using namespace std;

int main() {
    int tamanho;
    
    // Ler o tamanho da matriz quadrada
    cout << "Digite o tamanho da matriz quadrada: ";
    cin >> tamanho;
    
    // Declarar a matriz
    int matriz[tamanho][tamanho];
    
    // Ler os elementos da matriz
    cout << "Digite os elementos da matriz:" << endl;
    for (int i = 0; i < tamanho; i++) {
        for (int j = 0; j < tamanho; j++) {
            cout << "Elemento [" << i << "][" << j << "]: ";
            cin >> matriz[i][j];
        }
    }
    
    // Inicializar o menor valor com o maior valor possível para um inteiro
    int menor = numeric_limits<int>::max();
    int linhaMenor = -1;
    
    // Encontrar o menor número e a linha em que ele está
    for (int i = 0; i < tamanho; i++) {
        for (int j = 0; j < tamanho; j++) {
            if (matriz[i][j] < menor) {
                menor = matriz[i][j];
                linhaMenor = i;  // Atualiza a linha onde o menor número foi encontrado
            }
        }
    }
    
    // Imprimir a linha que contém o menor número
    cout << "O menor número está na linha: " << linhaMenor << endl;
    
    return 0;
}

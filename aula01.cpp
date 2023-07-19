#include <iostream>
using namespace std;

// Protótipos (Declaração das funções)
void inserir(float v[], float n, int &pos, int max);
void listar(float v[], int quantidade);
int buscar(float v[], int quantidade, int n);
void remover(float v[], int &quantidade, int n);

// Programa principal
int main(void)
{
    // Declaração da lista de notas
    float notas[10];
    int quantidade;
    // Valor a ser lido
    float n;
    // Posição do resultado
    // int pos;

    // Inicialização da lista: contém, inicialmente, zero elementos
    quantidade = 0;

    // Leitura de N dado
    do {
        cout << "Digite um valor: ";
        cin >> n;
        if (n != 0) {
            inserir (notas, n, quantidade, 10);
        }
    } while (n != 0);

    // Busca o valor digitado no vetor    
    cout << "Qual valor deseja buscar? ";
    cin >> n;  
    buscar(notas, quantidade, n);


    // Imprime vetor
    listar(notas, quantidade);
    return 0;
}

// Função que insere N na posição POS da lista C
void inserir (float v[], float n, int &pos, int max) {
    if (pos >= max) {
        cout << "ERRO: Lista cheia!" << endl;
    } else {
        v[pos] = n;
        pos++;
    }
}

void listar (float v[], int quantidade) {
    int index;
    for (index = 0; index <= quantidade; index++) {
        cout << v[index] << endl;
    }   
}


// Se encontrar, exibe o valor buscado. Se não, diz que não encontrou
int buscar (float v[], int quantidade, int n) {
    int index;
    for (index = 0; index <= quantidade; index++) {
        if (n == v[index]) {
            return index;
        } else {
            return -1;
        }
    } 
      
}

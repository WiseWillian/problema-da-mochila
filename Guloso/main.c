#include <stdio.h>

struct Mochila
{
    int pesoAtual;
    int pesoTotal;
    int *itens;
};
typedef struct Mochila Mochila;

void lerArquivo(char[], int*); // Input
void salvarArquivo(char[], Mochila); // Output

int main(int argc, char *argv[])
{
    int *itens;
    Mochila mochila;



    printf("Hello, World!\n");
    return 0;
}
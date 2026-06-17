#include <stdio.h>
#include <stdlib.h>

int manu(char c);
void gravarArquivo(char matriz[3][3], char nomeArquivo[]);

int main(int argc, char *argv[])
{
    char matriz[3][3];
    int indiceArgumento = 2;

    if (argc != 11)
    {
        printf("Uso: %s arquivo.txt O O O X X X O O O\n", argv[0]);
        return 1;
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            matriz[i][j] = argv[indiceArgumento][0];

            if (manu(matriz[i][j]) == 0)
            {
                printf("Erro: utilize apenas X ou O\n");
                return 1;
            }

            indiceArgumento++;
        }
    }

    gravarArquivo(matriz, argv[1]);

    return 0;
}
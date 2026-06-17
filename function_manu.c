#include <stdio.h>

int manu(char c)
{
    return (c == 'X' || c == 'O');
}

void gravarArquivo(char matriz[3][3], char nomeArquivo[])
{
    FILE *arquivo = fopen(nomeArquivo, "w");

    if (arquivo == NULL)
    {
        printf("Erro ao abrir arquivo\n");
        return;
    }

    for (int linha = 0; linha < 3; linha++)
    {
        fprintf(
            arquivo,
            "| %c | %c | %c |\n",
            matriz[linha][0],
            matriz[linha][1],
            matriz[linha][2]);
    }

    fprintf(arquivo, "\nCriado por Emanuelly Guline");

    fclose(arquivo);
}
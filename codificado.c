#include <stdio.h>
#include <string.h>

int main (){
  char nome[1000];
  int N;

	FILE *arquivo;

	printf("Digite o nome do arquivo: ");
	scanf("%s",nome);

	arquivo = fopen(nome,"r");

	if (arquivo == NULL)
	{
   	 	printf("Erro ao abrir o arquivo\n");
    	return 0;
	}

  fscanf(arquivo, "%d", N)

    int** matriz= malloc(sizeof(int*)*2);
    for (int i = 0; i < N; i++){
        matriz[i]=malloc(sizeof(int)*N);
    }

    for (int i = 0; i < N; ++i)
    {
      for (int j = 0; j < 2; ++j)
      {
        matriz[j][i] = 0;
        printf("%d", matriz[j][i]);
      }
      printf("\n");
    }

  fclose (arquivo);


}
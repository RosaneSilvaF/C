#include <stdio.h>

int Digitos(int N){
  int cont = 1;

  if(N >= 10){
    N = N /10;
    cont += Digitos(N);
    return cont;
  }
  	return cont;
}
 
int main(){
	int N;
	printf("Digite um numero inteiro: ");
	scanf("%i",&N);
	printf("Resultado: %i",Digitos(N));
}
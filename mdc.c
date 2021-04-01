#include <stdio.h>

int mdc(int a, int b){
	int maior, menor;
	if (a>b){
		maior=a;
		menor=b;
	}
	else{
		maior=b;
		menor=a;
	}
	if(maior%menor == 0){
		return menor;
	}
	else{
		return (mdc(menor, maior%menor));
	}
}

int main(){
	int a,b;
	printf("Digite dois numeros inteiros: ");
	scanf("%i %i",&a,&b);
	printf("Resultado: %i",mdc(a,b));
}
#include <stdio.h>

int mult(int base, int exp){
	int result = 1;
	if(exp>0){
		exp = exp-1;
	  	result = mult(base,exp)*base;
	}
		
	return result;	
}
 
int main(){
	int base,exp;
	printf("Digite a base e o expoente inteiros: ");
	scanf("%i%i",&base,&exp);
	printf("Resultado: %i",mult(base,exp));
	
}
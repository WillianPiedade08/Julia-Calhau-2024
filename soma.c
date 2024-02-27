#include <stdio.h>
int main(){
	//Definição de variaveis
	int a,b,c,d,e;
	
	
	printf("Digite tres números inteiros:\n");
	//Entrada
	scanf("%d %d %d",&a,&b,&d);
	
	//Processando
	c = a + b;
	e = c * d;
	printf("A soma de a + b = %d", c);
	printf("A multiplicação de c * d = %d", e);
	return 0;
}

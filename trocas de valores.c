/*/ escreva um codigo no qual o usuario digita 2 inteiros numeros respectivamente nas variaveis "a" e "b" e na tela exiba os valores trocados */
 
 #include<stdio.h>
 int main(){ 
 int a;
 int b;
 int c;
 
   
   printf("digite o valor de A: ");
   scanf("%d", &a);
   printf("digite o valor de B: ");
   scanf("%d", &b);
   
	c=a;
	a=b;	
	b=c;
	
	printf("valor de a: %d e valor de b: %d ", a, b);
	
	
 	
 }
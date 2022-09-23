#include <stdio.h>
#include <stdbool.h>
#include <string.h>

int main(){
	
int numero;
int limite;
int nm;
bool repete = false;
char escolha;

  limite = 10;
  
  do {
  	
  	
	printf("qual o numero em que queira saber a tabuada?: ");
	scanf ("%d", &nm);	
 	
	  for(numero=1;numero<=limite;numero++){
	  	
		printf("\n");
	  	printf("%d x %d = %d",nm, numero, nm*numero);
	  }
  	
  	printf("\n");
  	printf("%d",numero);
  	
  	printf("deseja calcular outra tabuada?: \n");
  	
	 printf("s-sim \n");
	 printf("n-nao");
	 scanf("%c", &escolha);
  	
  	
  } while (strcmp(escolha , "s"));
	
	
}
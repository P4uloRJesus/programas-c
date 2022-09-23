#include <stdio.h>
#include <stdbool.h>

int main (){
	
int si;
int sf;
int ti;
int tf;
int escolha;
bool repete =true;


	do
	{
	
	
	printf("informe a posicao inicial: ");	
	scanf("%d", &si);
	printf("informe a posicao final: ");
	scanf("%d", &sf);
	printf("informe o tempo inicial: ");
	scanf("%d", &ti);
	printf("informe o tempo final: ");
	scanf("%d", &tf);	
		
int t= ti-tf;
int s =si-sf;

float vm;
vm = s/t;

 printf("a velocidade media sera: %.0f \n", vm);
 
printf("ira querer outro calculo? \n");
printf("1-sim \n");

printf("2-nao\n");
scanf("%d", &escolha); 	

system("cls");

 }while (repete);
 
 
 
 
 
}



#include <stdio.h>

int main(){
	
float massa,altura,imc;	

	printf("Por favor, informe o seu peso(Kg): ");
     scanf("%f",&massa);
	printf("Por favor, informe a sua altura(m): "); 
	 scanf("%f",&altura);
	 
	imc = massa/(altura*altura);
	//imc = 18;	
	printf("o IMC e: %.2f",imc);
    printf("\n");
    
	if (imc < 18){
	printf("abaixo do peso ");

	} 
	else if (imc >= 18 && imc <25){
	 printf("peso normal ")	;
	}
	else if (imc >=25 && imc <30){
	 printf("acima do peso ");	
	}
	else {
	 printf("obesidade grau 1");
	}
	
	
	
	
}
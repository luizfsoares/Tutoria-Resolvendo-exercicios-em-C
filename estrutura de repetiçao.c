#include <stdio.h>
#include <math.h>

int main(){
	
	//Estruturas de repetição
	
	//-->Enquanto
	//Executa o codigo de dentro repetidamente até que a condição de dentro seja satisfeita. É bom usar quando não se sabe a quantidade exata de vezes que se quer repetir
	//se a condição for true, entra no while.
	//Nesse caso, se a condição inicial for false, ele nem entra no while e pula a estrutura toda
	//EXEMPLO
	
	double salario1 = 2500;
	
		while(salario1 < 5000){ 
		
			salario1 += 500;
			printf("Meu salario eh: %.1f\n", salario1);
		}
		printf("Meu salario parou de aumentar\n");
	
	//--> Faça enquanto...
	// Nessa estrutura de repetição a forma de funcionamento é praticamente igual a do while
	//Porém usando ela, o programador garante que o bloco de código seja executado pelo menos UMA vez
	// A ordem é inversa, enquanto no while ele checa a condição pra ir ou não pro codigo..
	// No do while ele faz o código uma vez e só depois checa pra saber se precisa ou não repetir
	
	
	double salario2 = 2500;
	
		do{
			salario2 += 500;
			printf("Meu salario eh: %.1f\n", salario2);
		
		}while(salario2 < 5000);
		
		printf("Meu salario parou de aumentar\n");
		
		
		
	// --> Para...
	//Parametros(inicialização, condição, incremento)
	//A estrutura for é bem prática quando ja se sabe o número de vezes que vai iterar
	
	
	//Imprimir numeros de 1 a 10
	int i;
	for (i = 1; i <= 10; i++){
		
		printf("O numero eh: %d\n", i);
	}

	
	return 0;
}


#include <stdio.h>
#include <math.h>

int main(){
	
	//Estruturas de repeti��o
	
	//-->Enquanto
	//Executa o codigo de dentro repetidamente at� que a condi��o de dentro seja satisfeita. � bom usar quando n�o se sabe a quantidade exata de vezes que se quer repetir
	//se a condi��o for true, entra no while.
	//Nesse caso, se a condi��o inicial for false, ele nem entra no while e pula a estrutura toda
	//EXEMPLO
	
	double salario1 = 2500;
	
		while(salario1 < 5000){ 
		
			salario1 += 500;
			printf("Meu salario eh: %.1f\n", salario1);
		}
		printf("Meu salario parou de aumentar\n");
	
	//--> Fa�a enquanto...
	// Nessa estrutura de repeti��o a forma de funcionamento � praticamente igual a do while
	//Por�m usando ela, o programador garante que o bloco de c�digo seja executado pelo menos UMA vez
	// A ordem � inversa, enquanto no while ele checa a condi��o pra ir ou n�o pro codigo..
	// No do while ele faz o c�digo uma vez e s� depois checa pra saber se precisa ou n�o repetir
	
	
	double salario2 = 2500;
	
		do{
			salario2 += 500;
			printf("Meu salario eh: %.1f\n", salario2);
		
		}while(salario2 < 5000);
		
		printf("Meu salario parou de aumentar\n");
		
		
		
	// --> Para...
	//Parametros(inicializa��o, condi��o, incremento)
	//A estrutura for � bem pr�tica quando ja se sabe o n�mero de vezes que vai iterar
	
	
	//Imprimir numeros de 1 a 10
	int i;
	for (i = 1; i <= 10; i++){
		
		printf("O numero eh: %d\n", i);
	}

	
	return 0;
}


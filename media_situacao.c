/**
 ============================================================================
 Descricao : O programa le duas notas e calcula a media com uma funcao,
             exibindo a situacao do aluno.
 ============================================================================
 */
#include <stdio.h>

float Media (float nota1, float nota2){
    float soma;
    soma = (nota1 + nota2) / 2.0;
    return soma;
}

int Situacao (float media){
    
    if (media >= 7.0){
        return 1;
    }
    //           FALSE               TRUE
    else if ((media >= 5.0) && (media < 7.0)){
        return 2;
    }
    else{
        return 3;
    }
}

int main()
{
    
    float media, nota1, nota2;
    int resultado;
    
    printf("Digite a nota 1: \n");
    scanf("%f", &nota1);
    printf("Digite a nota 2: \n");
    scanf("%f", &nota2);
    
    media = Media(nota1, nota2);
    

    resultado = Situacao(media);
    
    printf("RETORNO SITUACAO = %d\n", resultado);
    
    printf("A media das notas %.1f e %.1f eh %.1f\n", nota1, nota2, media);
    printf("A situacao do aluno eh: ");
    
    switch(resultado){
        
        case 1:
            puts("Aprovado.");
            break;
            
        case 2:
            puts("Recuperacao.");
            break;
        
        case 3:
            puts("Reprovado.");
            break;
    }
        
    return 0;
}

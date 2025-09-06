#include <stdio.h>
// comandos para o terminal: 
// gcc <nome_do_arquivo>.c -o <nome_do_arquivo> | ./<nome_do_arquivo>

int main(){
    // Exercício 1
    int numero;
    printf("Digite um número e direi se é positivo, negativo ou zero: ");
    scanf("%d", &numero);
    if(numero > 0){
        printf("Seu número é positivo\n");
    }else if(numero < 0){
        printf("Seu número é negativo\n");
    }else{
        printf("Seu número é zero\n");
    }

    // Exercício 2
    int idade;
    printf("Digite sua idade: ");
    scanf("%d", &idade);
    if(idade <= 12){
        printf("Você é criança\n");
    }else if(idade <= 17){
        printf("Você é adolescente\n");
    }else if(idade <= 59){
        printf("Você é Adulto\n");
    }else{
        printf("Você é idoso\n");
    }
    
    // Exercício 3 e 5
    int num1;
    int num2;
    int resultado;
    int opcao = 5;
    while(opcao != 0){
        printf("\n");
        printf("(1)Somar\n(2)Subtrair\n(3)Multiplicar\n(4)Dividir\n(0)Sair\n");
        printf("Digite o número da operação que você deseja realizar: ");
        scanf("%d", &opcao);
        if(opcao == 0){
            printf("Até mais!");
        }else{
            printf("Digite dois números que você deseja realizar a operação:\n");
            printf("Primeiro número: ");
            scanf("%d", &num1);
            printf("Agora o segundo número: ");
            scanf("%d", &num2);
            
            switch(opcao){
                case 1:
                    printf("Somando %d com %d\n", num1, num2);
                    resultado = num1 + num2;
                    printf("Resultado: %d\n", resultado);
                    break;
                case 2:
                    printf("Subtraindo %d com %d\n", num1, num2);
                    resultado = num1 - num2;
                    printf("Resultado: %d\n", resultado);
                    break;
                case 3:
                    printf("Multiplicando %d com %d\n", num1, num2);
                    resultado = num1 * num2;
                    printf("resultado: %d\n", resultado);
                    break;
                case 4:
                    if(num2 == 0){
                        printf("Não existe divisão por 0!\n");
                    }else{
                        printf("Dividindo %d com %d\n", num1, num2);
                        resultado = num1 / num2;
                        printf("Resultado: %d\n", resultado);
                    }
                    break;
                default:
                    printf("Opção inválida de operação!\n");
            }
        }
        
    }
    

    // Exercício 4
    int resultado;
    for(int i = 1; i <=100; i++){
        resultado += i;
    }
    printf("Resultado da soma dos números de 1 até 100: %d\n", resultado);

    return 0;
}
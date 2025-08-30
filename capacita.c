#include <stdio.h>

char pronto = 'F';
int guardado;

void marcar_pronto(void){ // ele lê na ordem, ou seja, de cima para baixo, linha por linha
    pronto = 'V'; // aqui é só pra um caractere, se fosse uma string teria que usar [] na frente
}

void guardar(int inteiro){
    guardado = inteiro; // não use int de novo, porque é como se você estivesse "criando" outra variável"
}

int numero;
char nome[20];

int main(){
    printf("Hello, world!\n");

    //exercício 2
    printf("Pronto = %c\n", pronto); //%c para caractere
    marcar_pronto();
    printf("Pronto = %c\n", pronto);
    guardar(10);
    printf("Numero guardado = %d\n", guardado); //%d para inteiros

    //exercício 3
    printf("Insira um número: ");
    scanf("%d", &numero);
    printf("O número inserido foi %d\n", numero);

    //exercício 4
    getchar(); //serve só pra apagar o \n que sobra da outra entrada feita (outro exercício) pq dá erro se não tirar
    
    printf("Digite seu nome: ");
    fgets(nome, 20, stdin);
    printf("O nome inserido foi %s", nome); //%s para arrays/strings

    //exercício 5
    int nota1;
    int nota2;
    int nota3;
    printf("Insira três notas: ");
    scanf("%d %d %d", &nota1, &nota2, &nota3);
    int resultado = (nota1 + nota2 + nota3)/3;
    printf("O resultado é igual a %d\n", resultado);

    //exercício 6
    float preco;
    printf("Insira o preço de um produto: ");
    scanf("%f", &preco);
    float resultado = preco - (preco*0.1);
    printf("O valor do produto com o desconto aplicado é igual a %.2f\n", resultado);
    return 0;
}

//exercício 1
unsigned contadorNaoNulo = 50;
long numeroGrande = 3000000000;
char palavra[7] = "relogio";


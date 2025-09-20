#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct Livro{
    char Titulo[50];
    char Autor[50];
    int Ano;
};

void main(){
    int qtd;
    struct Livro l1;

    printf("Insira o título do livro: ");
    fgets(l1.Titulo, 50, stdin);
    printf("Agora insira o autor: ");
    fgets(l1.Autor, 50, stdin);
    printf("Agora o ano: ");
    scanf("%d", &l1.Ano);
    l1.Titulo[strcspn(l1.Titulo, "\n")] = 0;
    l1.Autor[strcspn(l1.Autor, "\n")] = 0;
    printf("As informações que você inseriu foram:\n Título: %s\n Autor: %s\n Ano: %d\n", l1.Titulo, l1.Autor, l1.Ano);

    
    printf("Quantos livros você deseja cadastrar? ");
    scanf("%d", &qtd);
    getchar();
    struct Livro livros[qtd];
    for(int i = 0; i < qtd; i++){
        printf("Digite o título do livro: ");
        fgets(livros[i].Titulo, 50, stdin);
        printf("Digite o nome do autor: ");
        fgets(livros[i].Autor, 50, stdin);
        printf("Digite o ano do livro: ");
        scanf("%d", &livros[i].Ano);
        livros[i].Titulo[strcspn(livros[i].Titulo, "\n")] = 0;
        livros[i].Autor[strcspn(livros[i].Autor, "\n")] = 0;
        getchar();
    }

    for(int l = 0; l < qtd; l++){
        printf("O(s) livro(s) inserido(s) é:\n Título: %s\n Autor: %s\n Ano: %d\n", livros[l].Titulo, livros[l].Autor, livros[l].Ano);
    }

    int n;
    int *numero;
    printf("Quantos inteiros você deseja armazenar? ");
    scanf("%d", &n);
    numero = malloc(n * sizeof(int));

}
    
    
void* numeros(numero, n){
    for(int i = 0; i < n; i++){
        printf("Digite o número %d", i);
        scanf("%d", &numero[i]);
        getchar();
    }
    // não consegui terminar
}

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct livro{
    char titulo[100];
    char autor[50];
    int ano;
};

int main ( ){
    
    struct livro livro1;
    struct livro livro2;
    
    strcpy (livro1.titulo,"titulo do livro");
    strcpy (livro1.autor,"nome do autor");
    livro1.ano = 2010;
    
    strcpy(livro2.titulo,"senhor dos aneis");
    strcpy(livro2.autor,"John Ronald Reuel Tolkien");
    livro2.ano = 1954;
    
    printf("titulo do livro: %s\n",livro1.titulo);
    printf("autor do livro : %s\n",livro1.autor);
    printf("ano em que o livro foi escrito: %d\n",livro1.ano);
    
    printf("titulo do livro: %s\n",livro2.titulo);
    printf("autor do livro : %s\n",livro2.autor);
    printf("ano em que o livro foi escrito: %d\n",livro2.ano);
    
    return 0;
}
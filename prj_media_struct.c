// Online C compiler to run C program online
#include <stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct {
    char nome[50];
    float nota1;
    float nota2;
}Aluno;

float calcularMedia(Aluno aluno){
    return (aluno.nota1 + aluno.nota2) /2.0;
}

int main (void){
     Aluno aluno;
     
    strcpy(aluno.nome,"pedro");
    aluno.nota1 = 7.9;
    aluno.nota2 = 9.1;
    
    float media = calcularMedia(aluno);
    
    printf("nome:%s, nota:%2f",aluno.nome, media);
    
    return 0;
}
 


#include <stdio.h>
#include<stdlib.h>
#include<string.h>

 typedef struct {
    char nome[50];
    float preco;
    int quantidade;
}produto;

int main() {
    produto produtos[3];
    
    strcpy(produtos[0].nome, "Bandagem de luta");
    produtos[0].preco = 24.99;
    produtos[0].quantidade = 120;
    
    strcpy(produtos[1].nome, "luva de boxe");
    produtos[1].preco = 199.90;
    produtos[1].quantidade = 10;
    
    strcpy(produtos[2].nome, "protetor bucal");
    produtos[2].preco = 79.90;
    produtos[2].quantidade = 5;
    
    for(int i = 0;i < 3;i++){
    printf("nome: %s, preco: %.2f, quantidade: %d\n",produtos[i].nome, produtos[i].preco, produtos[i].quantidade);
    
  
    }
      return 0;
}

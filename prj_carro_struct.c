#include <stdio.h>
#include<string.h>

 struct Carro{
    char marca[50];
    char modelo[50];
    int ano;
};

int main (void){
    
    struct Carro carros[3];
    
    strcpy(carros[0].marca,"Toyota");
    strcpy(carros[0].modelo,"Corola");
    carros[0].ano = 2024;
    
    strcpy(carros[1].marca,"Fiat");
    strcpy(carros[1].modelo,"Toro");
    carros[1].ano = 2024;
    
    strcpy(carros[2].marca,"volkswagen");
    strcpy(carros[2].modelo,"Nivus");
    carros[2].ano = 2024;
    
    for(int i = 0; i < 3; i++){
        printf("carro: %d\n", i + 1);
        printf("marca: %s\n", carros[i].marca);
        printf("modelo: %s\n", carros[i].modelo);
        printf("ano: %d\n\n", carros[i].ano);
    }
    return 0;
}

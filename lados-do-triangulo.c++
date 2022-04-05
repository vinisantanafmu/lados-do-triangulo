#include <stdio.h>

float esquerdo, direito, base;

int main() {
    
    printf("Calculadora de lados triangulares\n\n");
    
    printf("Digite o tamanho da base:\n");
    scanf("%f", &base);
    
    printf("\n\nDigite o tamanho do lado esquerdo:\n");
    scanf("%f", &esquerdo);
    
    printf("\n\nDigite o tamanho do lado direito:\n");
    scanf("%f", &direito);
    
    if (base == esquerdo && esquerdo == direito) {
        
        printf("\n\n\nÉ um triangulo equilátero!");
        
    }
    else if (esquerdo == direito || base == esquerdo || base == direito) {
        
        printf("É um triangulo Isósceles!");
        
    }
    else {
        
        printf("É um triangulo escaleno!");
        
    }
    
    return 0;
    
}

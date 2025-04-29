#include <stdio.h>

void calcularmin(float p1, float p2, float e, float m, float a1, float a2, float ada) {
    float pesop = 2.5;
    float pesoe = 2.0;
    float pesoma = 1.5;
    float pesoada = 1.0;

    float calcnotas = pesop * (p1 + p2) + (pesoe * e) + pesoma * (m + a1 + a2) + pesoada * ada;

    float p3 = (900 - calcnotas) / pesop;

    if (p3 <= 0) {
        printf("\n Jubileusson passou!");
    } else {
        printf("%f\n", p3);
    }
}

int main() {
    float p1, p2, e, m, a1, a2, ada;
    
    printf("Digite a nota p1: ");
    scanf("%f", &p1);
    
    printf("Digite a nota p2: ");
    scanf("%f", &p2);
    
    printf("Digite a nota e: ");
    scanf("%f", &e);
    
    printf("Digite a nota m: ");
    scanf("%f", &m);
    
    printf("Digite a nota a1: ");
    scanf("%f", &a1);
    
    printf("Digite a nota a2: ");
    scanf("%f", &a2);
    
    printf("Digite a nota ada: ");
    scanf("%f", &ada);
    
    calcularmin(p1, p2, e, m, a1, a2, ada);
    
    return 0;
}
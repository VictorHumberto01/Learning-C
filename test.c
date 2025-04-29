#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

char *addBinary(char *a, char *b) {
    int i;
    char levar = '0';
    int tamanho_a = strlen(a);
    int tamanho_b = strlen(b);
    int maior_tamanho;
    int quant_zeros = 0;
    char *resultado_sem_zeros = NULL;

    if (tamanho_a > tamanho_b) {
        maior_tamanho = tamanho_a;
    } else {
        maior_tamanho = tamanho_b;
    }

    char *copia_a = (char *)malloc(sizeof(char) * (maior_tamanho + 1)); // +1 para '\0' string end
    if (copia_a == NULL) {
        printf("Nao foi possivel alocar memoria para copia_a\n");
        exit(1);
    }

    char *copia_b = (char *)malloc(sizeof(char) * (maior_tamanho + 1));
    if (copia_b == NULL) {
        printf("Nao foi possivel alocar memoria para copia_b\n");
        exit(1);
    }

    if (tamanho_a > tamanho_b) {
        memset(copia_b, '0', maior_tamanho - tamanho_b);
        copia_b[maior_tamanho - tamanho_b] = '\0';
        copia_a[0] = '\0';
    } else if (tamanho_a < tamanho_b) {
        memset(copia_a, '0', maior_tamanho - tamanho_a);
        copia_a[maior_tamanho - tamanho_a] = '\0';
        copia_b[0] = '\0';
    } else {
        copia_a[0] = '\0';
        copia_b[0] = '\0';
    }

    strcat(copia_a, a);
    strcat(copia_b, b);

    // copia_a e copia_b estão formatados para comparação

    char *resultado = (char *)malloc(sizeof(char) * (maior_tamanho + 2)); // + 2 para quando precisar levar bit 1
    if (resultado == NULL) {
        printf("Nao foi possivel alocar resultado\n");
        exit(1);
    }
    memset(resultado, '0', maior_tamanho + 1);
    resultado[maior_tamanho + 1] = '\0';

    for (i = (maior_tamanho - 1); i >= 0; i--) {
        if (copia_a[i] == '0' && copia_b[i] == '0' && levar == '0') {
            levar = '0';
            resultado[i + 1] = '0';
        } else if (copia_a[i] == '0' && copia_b[i] == '0' && levar == '1') {
            levar = '0';
            resultado[i + 1] = '1';
        } else if (copia_a[i] == '1' && copia_b[i] == '1' && levar == '0') {
            levar = '1';
            resultado[i + 1] = '0';
        } else if (copia_a[i] == '1' && copia_b[i] == '1' && levar == '1') {
            levar = '1';
            resultado[i + 1] = '1';
        } else if ((copia_a[i]) ^ (copia_b[i]) && levar == '0') // se somente se um dos dois for 1
        {
            levar = '0';
            resultado[i + 1] = '1';
        } else // if((copia_a[i]) ^ (copia_b[i]) && levar == '1')
        {
            levar = '1';
            resultado[i + 1] = '0';
        }
    }

    if (levar == '1') {
        resultado[0] = '1';
    } else {
        resultado[0] = '0';
    }

    for (i = 0; resultado[i] == '0'; i++) {
        quant_zeros++;
    }

    if (quant_zeros == (maior_tamanho + 1)) // se resultado for totalmente feito de '0'
    {
        resultado = realloc(resultado, sizeof(char) + 1);
        if (resultado == NULL) {
            printf("Nao foi possivel reallocar resultado\n");
            exit(1);
        }
        resultado[0] = '0';
        resultado[1] = '\0';
    } else if (quant_zeros > 0 && quant_zeros < (maior_tamanho + 1)) // se resultado tiver '0's na esquerda do bin
    {
        resultado_sem_zeros = (char *)malloc(sizeof(char) * ((maior_tamanho + 2) - quant_zeros));
        if (resultado_sem_zeros == NULL) {
            printf("Nao foi possivel allocar resultado_sem_zeros\n");
            exit(1);
        }
        strcpy(resultado_sem_zeros, (resultado + quant_zeros)); // copiar resultado a partir da pos que não possui '0'
        free(copia_a);
        free(copia_b);
        free(resultado);
        return resultado_sem_zeros;
    }

    free(copia_a);
    free(copia_b);

    return resultado;
}

char *decimalToBinary(int n) {
    char *binary = (char *)malloc(33);
    if (binary == NULL) {
        printf("Nao foi possivel alocar memoria para binary\n");
        exit(1);
    }
    binary[32] = '\0';
    for (int i = 31; i >= 0; i--) {
        binary[i] = (n % 2) + '0';
        n /= 2;
    }
    return binary;
}

int main() {
    int num1, num2;
    printf("Enter first number: ");
    scanf("%d", &num1);
    printf("Enter second number: ");
    scanf("%d", &num2);

    char *binary1 = decimalToBinary(num1);
    char *binary2 = decimalToBinary(num2);

    printf("Binary of %d: %s\n", num1, binary1);
    printf("Binary of %d: %s\n", num2, binary2);

    char *result = addBinary(binary1, binary2);
    printf("Result: %s\n", result);

    free(binary1);
    free(binary2);
    free(result);

    return 0;
}

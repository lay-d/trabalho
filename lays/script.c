#include <stdio.h>

// Funções para operações matemáticas
float somar(float a, float b) {
    return a + b;
}

float subtrair(float a, float b) {
    return a - b;
}

float multiplicar(float a, float b) {
    return a * b;
}

float dividir(float a, float b) {
    if (b == 0) {
        printf("Erro: Divisão por zero!\n");
        return 0; // Retorna 0 como valor de erro
    }
    return a / b;
}

int main() {
    int opcao;
    float num1, num2, resultado;

    // Menu principal
    do {
        printf("Calculadora Simples\n");
        printf("Escolha a operação:\n");
        printf("1. Soma\n");
        printf("2. Subtração\n");
        printf("3. Multiplicação\n");
        printf("4. Divisão\n");
        printf("5. Sair\n");
        printf("Digite sua opção: ");
        scanf("%d", &opcao);

        if (opcao == 5) {
            printf("Saindo da calculadora...\n");
            break; // Sai do loop e encerra o programa
        }

        // Solicita os números
        printf("Digite o primeiro número: ");
        scanf("%f", &num1);
        printf("Digite o segundo número: ");
        scanf("%f", &num2);

        // Realiza a operação com base na opção do usuário
        switch (opcao) {
            case 1:
                resultado = somar(num1, num2);
                printf("Resultado: %.2f\n", resultado);
                break;
            case 2:
                resultado = subtrair(num1, num2);
                printf("Resultado: %.2f\n", resultado);
                break;
            case 3:
                resultado = multiplicar(num1, num2);
                printf("Resultado: %.2f\n", resultado);
                break;
            case 4:
                resultado = dividir(num1, num2);
                if (num2 != 0) {
                    printf("Resultado: %.2f\n", resultado);
                }
                break;
            default:
                printf("Opção inválida. Tente novamente.\n");
        }
    } while (opcao != 5);

    return 0;
}

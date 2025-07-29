#include <stdio.h>

int main() {
    float num1, num2, resultado;
    int operacao;

    while (1) {
        // Exibir o menu de opções
        printf("Escolha uma operação:\n");
        printf("1. Soma\n");
        printf("2. Subtração\n");
        printf("3. Multiplicação\n");
        printf("4. Divisão\n");
        printf("5. Sair\n");
        printf("Digite o número da operação (1-5): ");
        scanf("%d", &operacao);

        // Se o usuário escolher 5, o programa sai
        if (operacao == 5) {
            printf("Saindo... Obrigado por usar a calculadora!\n");
            break;
        }

        // Receber os números
        printf("Digite o primeiro número: ");
        scanf("%f", &num1);
        printf("Digite o segundo número: ");
        scanf("%f", &num2);

        // Realizar a operação escolhida
        switch (operacao) {
            case 1: // Soma
                resultado = num1 + num2;
                printf("Resultado: %.2f + %.2f = %.2f\n", num1, num2, resultado);
                break;
            case 2: // Subtração
                resultado = num1 - num2;
                printf("Resultado: %.2f - %.2f = %.2f\n", num1, num2, resultado);
                break;
            case 3: // Multiplicação
                resultado = num1 * num2;
                printf("Resultado: %.2f * %.2f = %.2f\n", num1, num2, resultado);
                break;
            case 4: // Divisão
                // Verificar se o divisor é zero
                if (num2 == 0) {
                    printf("Erro: Divisão por zero não é permitida!\n");
                } else {
                    resultado = num1 / num2;
                    printf("Resultado: %.2f / %.2f = %.2f\n", num1, num2, resultado);
                }
                break;
            default:
                printf("Operação inválida. Tente novamente.\n");
        }

        // Opção para continuar ou sair
        printf("\nDeseja realizar outra operação? (1 - Sim / 0 - Não): ");
        int continuar;
        scanf("%d", &continuar);
        if (continuar == 0) {
            printf("Saindo... Obrigado por usar a calculadora!\n");
            break;
        }
    }

    return 0;
}

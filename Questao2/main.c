/***************************************************************
 * Programa: Questão 2 da Primaira VA de Programação I
 * BSI - UFRPE - 2025.1
 * Professora Sônia Virginia Alves França
 * Programador: Filipe Quirino Alves
 * Data: 29/04/2025
 * Programa para calcular o valor dos serviços realizados no cliente.
 *Copilador: VScode
 ***************************************************************/
#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "pt_BR.UTF-8");

    char nome[20];
    float valorServico = 0.00;
    int tipoServico, outroServico;

    printf("\n######## Cabelereira Leila -- Entrada de Dados ####### \n\n");
    printf("Nome do cliente: ");
    fgets(nome, sizeof(nome), stdin);

    printf("\n\n******* Valor do Servico ******* \n");
    printf("********************************\n");
    printf("Codigo / Servico    / Preco \n");
    printf("********************************\n\n");
    printf("1      / Corte      / R$ 70,00\n");
    printf("2      / Escova     / R$ 50,00\n");
    printf("3      / Hidratacao / R$ 80,00\n");
    printf("4      / Coloracao  / R$ 110,00\n\n");
    printf("********************************\n\n");

    do{
        printf("Digite o Codigo do servico, de acordo com a tabela: ");
        scanf("%d", &tipoServico);
        if (tipoServico != 1 && tipoServico != 2 && tipoServico != 3 && tipoServico != 4) {
            printf("ATENCAO -- Codigo Invalido --\n");
            continue; 
        }
        switch (tipoServico)
        {
        case 1:
            valorServico = valorServico + 70.00;
            break;
        case 2:
            valorServico = valorServico + 50.00;
            break;
        case 3:
            valorServico = valorServico + 80.00;
            break;
        case 4:
            valorServico = valorServico + 110.00;
            break;
        }

        do {
            printf("\n Foi realizado mais algum servico (1-sim/0-nao)? ");
            scanf("%d", &outroServico);
            if (outroServico != 1 && outroServico != 0) {
            printf("ATENCAO -- Opcao Invalida --\n");
            }
        } while (outroServico != 1 && outroServico != 0);

    }
    while (outroServico != 0);

    printf("\n######## Cabelereira Leila - Resultado ######## \n\n");
    printf("Cliente -------- %s\n",nome);
    printf("Valor a ser pago: R$ %.2f \n\n", valorServico);

    printf("Pressione Enter para continuar..."); // aguarda o usuário pressionar "Enter", criando a pausa desejada
    while (getchar() != '\n'); // Limpa o buffer de entrada
    getchar();

    return 0;
}
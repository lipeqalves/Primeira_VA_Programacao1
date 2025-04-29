/***************************************************************
 * Programa: Questão 1 da Primeira VA de Programação I
 * Programador: Filipe Quirino Alves
 * Data Inicio: 29/04/2025
 * Programa para ler os dados da pesquisa e apresentar os resultados
 ***************************************************************/
#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "pt_BR.UTF-8");

    int idade, sexo, vaiPraFesta, oQueMaisGosta, novaPesquisa, entrevistado = 1;
    int gostaDeTudo = 0, mulheresGostamMusica = 0;

    printf("####################### O Melhor Sao Joao ################################## \n\n");
    do
    {
    printf("****** Coleta De Dados, Entrevistado: %d ****** \n\n", entrevistado);
    printf("Qual sua Idade: ");
    scanf("%d", &idade);
    printf("Qual o seu Sexo (1-feminino/2-masculino): ");
    scanf("%d",&sexo);
    printf("O que voce mais gosta nas festas juninas (1-musica, 2-comidas tipicas, 3-brincadeiras, 4-fogos, 5-tudo, 6-nada: ");
    scanf("%d", &oQueMaisGosta);
    printf("Vai participar de alguma festa junina este ano (1-sim/0-nao): ");
    scanf("%d", &vaiPraFesta);
    printf("****** **************** ****** \n\n");
    // • Quantidade de pessoas que gostam de tudo nas festas juninas;
    if (oQueMaisGosta == 5)
    {
        gostaDeTudo = gostaDeTudo + 1;
    }
    // • Quantidade de mulheres que gostam mais das músicas juninas;
    if (sexo == 1 && oQueMaisGosta == 1)
    {
        mulheresGostamMusica = mulheresGostamMusica + 1;
    }
    
        
    printf("Nova pesquisa?(1-sim/0-nao) ");
    scanf("%d", &novaPesquisa);
    entrevistado++;
    }while (novaPesquisa != 0);
    printf("\nResultados \n");

    printf("Quantidade de pessoas que gostam de tudo nas festas juninas: %d \n\n", gostaDeTudo);
    printf("Quantidade de mulheres que gostam mais das musicas juninas: %d \n\n", mulheresGostamMusica);

    /*
    printf("Dados: \n");
    printf("Idade %d: \n",idade);
    printf("Sexo: %d: \n", sexo);
    printf("O que mais gosta: %d: \n",oQueMaisGosta);
    printf("Vai pra festa: %d: \n", vaiPraFesta);
    */
    printf("Pressione Enter para continuar..."); // aguarda o usuário pressionar "Enter", criando a pausa desejada
    while (getchar() != '\n'); // Limpa o buffer de entrada
    getchar();
    return 0;
}
/***************************************************************
 * Programa: Questão 1 da Primeira VA de Programação I
 * BSI - UFRPE - 2025.1
 * Professora Sônia Virginia Alves França
 * Programador: Filipe Quirino Alves
 * Data Inicio: 29/04/2025
 * Programa para ler os dados da pesquisa e apresentar os resultados
 * Copilador: VScode
 * https://github.com/lipeqalves/Primeira_VA_Programacao1.git
 ***************************************************************/
#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "pt_BR.UTF-8");

    int idade, sexo, vaiPraFesta, oQueMaisGosta, novaPesquisa, entrevistado = 1;
    int gostaDeTudo = 0, mulheresGostamMusica = 0, qtdHomensFogos=0, somaIdadeHomens = 0;
    int qtdMulher = 0, somaIdadeBrincadeiras = 0, qtdNaoGosta = 0, qtdVaiPraFesta = 0;
    int qtdGostaMusica = 0, qtdGostaComida = 0, qtdGostaFogos = 0, qtdGostaBrincadeiras = 0;
    float mediaHomensFogos = 0.0, mediaIdadeBrincadeiras = 0.0;
    float percMulherFesta = 0.0, percNaoGosta = 0.0;

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
    // • Média da idade dos homens que gostam mais dos fogos;

    if (sexo == 2 && oQueMaisGosta == 4)
    {
        qtdHomensFogos = qtdHomensFogos + 1;
        somaIdadeHomens =  somaIdadeHomens + idade;
        if (qtdHomensFogos > 0)
        {
            mediaHomensFogos = (float)somaIdadeHomens / qtdHomensFogos;
        }
    }
    // • Média da idade das pessoas que preferem as brincadeiras juninas;

    if(oQueMaisGosta == 3){
        qtdGostaBrincadeiras = qtdGostaBrincadeiras + 1;
        somaIdadeBrincadeiras = somaIdadeBrincadeiras + idade;
        if (qtdGostaBrincadeiras > 0){
            mediaIdadeBrincadeiras = (float)somaIdadeBrincadeiras / qtdGostaBrincadeiras;
        }
    }

    // • Percentual de pessoas que não gostam de nada nas festas juninas;
    if(oQueMaisGosta == 6){
        qtdNaoGosta = qtdNaoGosta + 1;

    }
    percNaoGosta = ((float)qtdNaoGosta / entrevistado) * 100;

    // • Percentual de mulheres que vão participar de alguma festa junina;
    if(sexo == 1){
        qtdMulher = qtdMulher + 1;
        if(vaiPraFesta == 1){
            qtdVaiPraFesta = qtdVaiPraFesta + 1;
        }
        percMulherFesta = ((float)qtdVaiPraFesta / qtdMulher) *100;
    }
    // • Qual a preferência dos entrevistados: música, comidas típicas, brincadeiras ou fogos?

    switch (oQueMaisGosta)
    {
    case 1:
        qtdGostaMusica = qtdGostaMusica + 1;
        break;
    case 2:
        qtdGostaComida = qtdGostaComida+ 1;
        break;
    case 3:
        qtdGostaBrincadeiras = qtdGostaBrincadeiras + 1;
        break;
    case 4:
        qtdGostaFogos = qtdGostaFogos + 1;
        break;
    }

    printf("Nova pesquisa?(1-sim/0-nao) ");
    scanf("%d", &novaPesquisa);
    entrevistado++;
    }while (novaPesquisa != 0);
    printf("\n##################################### RESULTADOS ######################################\n\n");

    printf("Quantidade de pessoas que gostam de tudo nas festas juninas: %d \n\n", gostaDeTudo);
    printf("Quantidade de mulheres que gostam mais das musicas juninas: %d \n\n", mulheresGostamMusica);
    printf("Media da idade dos homens que gostam mais dos fogos: %.2f anos\n\n", mediaHomensFogos);
    printf("Media da idade das pessoas que preferem as brincadeiras juninas: %.2f anos\n\n", mediaIdadeBrincadeiras);
    printf("Percentual de pessoas que nao gostam de nada nas festas juninas: %.2f%% \n\n", percNaoGosta);
    printf("Percentual de mulheres que vao participar de alguma festa junina: %.2f%% \n\n", percMulherFesta);
    printf("Qual a preferencia dos entrevistados: musica, comidas tipicas, brincadeiras ou fogos?\n");
    if (qtdGostaMusica > qtdGostaComida && qtdGostaMusica > qtdGostaBrincadeiras && qtdGostaMusica > qtdGostaFogos)
    {
        printf("A maioria dos entrevistados preferem: MUSICAS \n\n");
    }
    else if (qtdGostaComida > qtdGostaMusica && qtdGostaComida > qtdGostaBrincadeiras && qtdGostaComida > qtdGostaFogos)
    {
        printf("A maioria dos entrevistados preferem: COMIDAS TIPICAS \n\n");
    }
    else if (qtdGostaBrincadeiras > qtdGostaMusica && qtdGostaBrincadeiras > qtdGostaComida && qtdGostaBrincadeiras > qtdGostaFogos)
    {
        printf("A maioria dos entrevistados preferem: BRINCADEIRAS \n\n");
    }
    else if (qtdGostaFogos > qtdGostaMusica && qtdGostaFogos > qtdGostaComida && qtdGostaFogos > qtdGostaBrincadeiras)
    {
        printf("A maioria dos entrevistados preferem: FOGOS \n\n");
    }else{
        printf(" Todas as atividades sao bem avaliadas \n\n");
    }

    printf("\n##################################### ########## ######################################\n\n");
    printf("Pressione Enter para continuar..."); // aguarda o usuário pressionar "Enter", criando a pausa desejada
    while (getchar() != '\n'); // Limpa o buffer de entrada
    getchar();
    return 0;
}
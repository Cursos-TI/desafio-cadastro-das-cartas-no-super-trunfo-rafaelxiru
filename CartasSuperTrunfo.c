#include <stdio.h>
#include <string.h>
#include <locale.h>
int main()
{
    setlocale(LC_ALL, "pt_BR.UTF-8");//vocabulario português .

    //variaves string que armasena uma cadeida de caracteres.//
    char codigo01[20];
    char estado01[50];
    char cidade01[50];
    char codigo02 [20];
    char estado02 [50];
    char cidade02 [50];

//variavel que representa numeros cientificos mais exatos.//
    double populacao01;
    double populacao02;
    double pib01;
    double pib02;

//variavel para numeros com menos precisão é usada para ate duas casas decimais.//
    float area01;
    float area02;

//variavel usada para numeros inteiros.// 
    int pturisticos01;
    int pturisticos02;


printf("        ***-------Jogo Super Trunfo Países ------***\n\n");


printf("Fornessa os seguintes dados de cada carta:\n\n");
printf("Estado: Escolha uma letra de A a H representando um dos oito estados.\n");
printf("Código da Carta: A letra do estado seguida de um número de 01 a 04 ex: A01, B03.\n");
printf("Nome da Cidade: O nome da cidade.\n");
printf("População: O número de habitantes da cidade.\n");
printf("Área em km²: A área da cidade em quilômetros quadrados.\n");
printf("PIB: O Produto Interno Bruto da cidade.\n");
printf("Número de Pontos Turísticos: A quantidade de pontos turísticos na cidade.\n\n");


//forecendo os dados da carta 1//
    printf("Estado: ");
    fgets(estado01,20,stdin);
    estado01[strlen(estado01) - 1]='\0';

    printf("Codigo da carta: ");
    fgets(codigo01,10,stdin);
    codigo01[strlen(codigo01) - 1]='\0'; //remove o espaço apos o fgets.

    printf("Cidade: ");
    fgets(cidade01,20,stdin);
    cidade01[strlen(cidade01) - 1]='\0';
    
    printf("População: ");
    scanf("%lf", &populacao01);

    printf("Area em km²: ");
    scanf("%f", &area01);

    printf("Pib: ");
    scanf("%lf", &pib01);

    printf("Pontos turisticos: ");
    scanf("%d", &pturisticos01);
    
  
//imprimindo os dados da carta 1//
    printf("                  carta 1\n");

    printf("Estado:%s\n", estado01);
    printf("Código: %s\n", codigo01);
    printf("Cidade: %s\n", cidade01);
    printf("População: %.4lf\n", populacao01);
    printf("Área em km²: %.2lf\n", area01);
    printf("Pib: %.4lf\n", pib01);
    printf("Pontos Turisticos: %d\n", pturisticos01);
    

    printf("                   Proxima carta!\n");
    getchar(); // limpa o buffer entre o scanf e o fgets.

 //fornecendo os dados da carta 2//
    
    printf("Estado: ");
    fgets(estado02,20,stdin);
    estado02[strlen(estado02)-1]='\0';

    printf("Codigo da carta: ");
    fgets(codigo02,11,stdin);
   codigo02[strlen(codigo02)-1]='\0';
    
    printf("Cidade: ");
    fgets(cidade02,20,stdin);
    cidade02[strlen(cidade02)-1]='\0';
    
    printf("População: ");
    scanf("%lf", &populacao02);

    printf("Area em Km²: ");
    scanf("%f", &area02);

    printf("Pib: ");
    scanf("%lf", &pib02);

    printf("Pontos turisticos: ");
    scanf("%d", &pturisticos02);

//imprimindo os dados da carta 2//
    printf("                     carta 2\n");

    printf("Estado:%s\n", estado02); 
    printf("Codigo: %s\n", codigo02);
    printf("Cidade: %s\n", cidade02);
    printf("População: %.4lf\n", populacao02);
    printf("Area: %.2lf\n", area02);
    printf("Pib: %.4lf\n", pib02);
    printf("Pontos Turisticos: %d\n", pturisticos02);

    return 0;
}

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
//variavel para numeros com menos precisão é usada para ate duas casas decimais.
    float populacao01;
    float populacao02;
    float pib01;
    float pib02;
    float dpopulacional01;
    float pibpercapita01;
    float dpopulacional02;
    float pibpercapita02;
    float area01;
    float area02;

   
//variavel usada para numeros inteiros.// 
    int pturisticos01;
    int pturisticos02;
    int opcao;

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
    scanf("%f", &populacao01);

    printf("Area em km²: ");
    scanf("%f", &area01);

    printf("Pib: ");
    scanf("%f", &pib01);

    printf("Pontos turisticos: ");
    scanf("%d", &pturisticos01);
    
  
//imprimindo os dados da carta 1//
    printf("                  CARTA 1\n");

    printf("Estado:%s\n", estado01);
    printf("Código: %s\n", codigo01);
    printf("Cidade: %s\n", cidade01);
    printf("População: %.3f\n", populacao01);
    printf("Área em km²: %.1f\n", area01);
    printf("Pib: %.3f\n", pib01);
    printf("Pontos Turisticos: %d\n\n", pturisticos01);
    
    dpopulacional01 = (float) (populacao01 / area01);
    printf("Densidade populacional: %.4f habitante por km2.\n", dpopulacional01 );

    pibpercapita01 = (float) (pib01 / populacao01);

    printf("PIB per Capita: %.4f R$ por habitante.\n\n", pibpercapita01);

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
    scanf("%f", &populacao02);

    printf("Area em Km²: ");
    scanf("%f", &area02);

    printf("Pib: ");
    scanf("%f", &pib02);

    printf("Pontos turisticos: ");
    scanf("%d", &pturisticos02);

//imprimindo os dados da carta 2//
    printf("                     CARTA 2\n");

    printf("Estado:%s\n", estado02); 
    printf("Codigo: %s\n", codigo02);
    printf("Cidade: %s\n", cidade02);
    printf("População: %.3f\n", populacao02);
    printf("Area: %.1f\n", area02);
    printf("Pib: %.3f\n", pib02);
    printf("Pontos Turisticos: %d\n\n", pturisticos02);

    dpopulacional02 = (float) (populacao02 / area02);
    printf("Densidade populacional: %.4f habitante por km2.\n", dpopulacional02 );

    pibpercapita02 = (float) (pib02 / populacao02);

    printf("PIB per Capita: %.4f R$ por habitante.\n\n", pibpercapita02 );


    // usando o swtch 



    printf("Escolha opção para comparacão!\n");
    printf("1: Populaçao\n");
    printf("2: Area\n");
    printf("3: Densidade populacional\n");
    printf("4: Pib\n");
    printf("5: Pib Per Capita\n");
    printf("6: Pontos turisticos\n\n");
    printf("Opção: ");
    scanf("%d",&opcao);

    switch (opcao)
    {
    case 1:
    printf("Comparando a Populacao --->>\n");
    printf("Carta 1= %f mil habitantes    Carta 2= %f mil habitantes\n", populacao01, populacao02);
    if(populacao01 > populacao02) {
    printf("A CARTA 1 venceu com maior Populacao! \n\n");
  }
    else if( populacao01 == populacao02){
    printf("Ocorreu um empate!");     
  } else {
    printf("A CARTA 2 venceu com maior Populaçao! \n\n");
  } 
    break;

    case 2:
    printf("Comparando a Area --->>\n");
    printf("Carta 1= %f km2   Carta 2= %f km2\n", area01, area02);
    if(area01>area02) {
    printf("A CARTA 1 venceu com maior Area! \n\n");
  }
    else if( area01 == area02){
    printf("Ocorreu um empate!");     
  }
    else{
    printf("A CARTA 2 venceu com maior Area! \n\n");
  } 
    break;

    case 3:
    printf("Comparando a Densidade Populacional --->>\n"); 
    printf("Carta 1= %.6f km2 por habitante   Carta 2= %.6f km2 por habitante\n", dpopulacional01, dpopulacional02);
    if(dpopulacional01 < dpopulacional02) {
    printf("A CARTA 1 venceu com menor Densidade Populacional! \n\n");
  } 
    else if( dpopulacional01 == dpopulacional02){
    printf("Ocorreu um empate!");     
  } 
    else{
    printf("A CARTA 2 venceu com menor Dencidade Populacional! \n\n");
  } 
    break;

    case 4:
    printf("Comparando o PIB --->>\n");
    printf("Carta 1= %.6f milhoes    Carta 2= %.6f milhoes\n", pib01, pib02);
    if(pib01 > pib02) {
    printf("A CARTA 1 venceu com maior Pib! \n\n");
  }
    else if( pib01 == pib02){
    printf("Ocorreu um empate!");  
  }
    else{
    printf("A CARTA 2 venceu com maior Pib! \n\n");
  } 
    break;

    case 5:
    printf("Comparando o PIB Per Capita --->>\n");
    printf("Carta 1= %.4f reais   Carta 2= %.4f reais\n", pibpercapita01, pibpercapita02);
    if(pibpercapita01 > pibpercapita02) {
    printf("A CARTA 1 venceu com maior PIB Per Capita! \n\n");
  } 
    else if( pibpercapita01 == pibpercapita02){
    printf("Ocorreu um empate!"); 
   }
    else {
    printf("A CARTA 2 venceu com maior PIB Per Capita! \n\n");
  } 
    break;

    case 6:
    printf("Comparando os Pontos Turisticos --->>\n");
    printf("Carta 1= %d    Carta 2= %d\n", pturisticos01, pturisticos02);
    if(pturisticos01 > pturisticos02) {
    printf("A CARTA 1 venceu com mais Pontos Turisticos! \n");
  } 
    else if( pturisticos01 == pturisticos02){
    printf("Ocorreu um empate!"); 
  }
    else{
    printf("A CARTA 2 venceu com mais Pontos Turisticos! \n");
  } 
    break;

    
    default:
    printf("Opçao invalida!\n");

    }
    return 0;
    



}

    

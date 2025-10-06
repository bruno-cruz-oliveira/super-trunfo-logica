#include <stdio.h>

int main()
{
  /* Variáveis da cidade 1 */
  char state1[3], letterCode1[5], cityName1[50], countryName1[50];
  unsigned short int touristAttractions1;
  float area1, GDP1, populationDensity1, GDPPerCapita1, superPower1;
  long long int population1;

  /* Variáveis da cidade 2 */
  char state2[3], letterCode2[5], cityName2[50], countryName2[50];
  unsigned short int touristAttractions2;
  float area2, GDP2, populationDensity2, GDPPerCapita2, superPower2;
  long long int population2;

  /*
  printf("%lu\n", sizeof(int));
  printf("%lu\n", sizeof(long int));
  printf("%lu\n", sizeof(long long int));
  printf("%lu\n", sizeof(unsigned int));
  printf("%lu\n", sizeof(unsigned long int));
  printf("%lu\n", sizeof(unsigned long long int));
  */

  /* Obter os dados da cidade 1 */
  printf("Informe os dados da primeira cidade.\n");

  printf("País:\n");
  scanf(" %s", &countryName1);

  printf("Estado:\n");
  scanf(" %s", &state1);

  printf("Código:\n");
  scanf(" %s", &letterCode1);

  printf("Nome da Cidade:\n");
  scanf(" %s", &cityName1);

  printf("População:\n");
  scanf(" %lld", &population1);

  printf("Área:\n");
  scanf(" %f", &area1);

  printf("PIB:\n");
  scanf(" %f", &GDP1);

  printf("Número de Pontos Turísticos:\n");
  scanf(" %hu", &touristAttractions1);

  /* Calcular a densidade demográfica, PIB per capita cidade e super poder da cidade 1 */
  populationDensity1 = (float)population1 / area1;
  GDPPerCapita1 = (float)GDP1 / population1;
  superPower1 = (float)(population1 + area1 + GDP1 + touristAttractions1 + GDPPerCapita1) - populationDensity1;

  /* Obter os dados da cidade 2 */
  printf("\nInforme os dados da segunda cidade.\n");

  printf("País:\n");
  scanf(" %s", &countryName2);

  printf("Estado:\n");
  scanf(" %s", &state2);

  printf("Código:\n");
  scanf(" %s", &letterCode2);

  printf("Nome da Cidade:\n");
  scanf(" %s", &cityName2);

  printf("População:\n");
  scanf(" %lld", &population2);

  printf("Área:\n");
  scanf(" %f", &area2);

  printf("PIB:\n");
  scanf(" %f", &GDP2);

  printf("Número de Pontos Turísticos:\n");
  scanf(" %hu", &touristAttractions2);

  /* Calcular a densidade demográfica, PIB per capita cidade e super poder da cidade 2 */
  populationDensity2 = (float)population2 / area2;
  GDPPerCapita2 = (float)GDP2 / population2;
  superPower2 = (float)(population2 + area2 + GDP2 + touristAttractions2 + GDPPerCapita2) - populationDensity2;

  /* Mostrar o menu interativo */
  short int comparisonAttribute;

  printf("\nEscolha um atributo para à comparação:\n");
  printf("1. Nome do país (exibir informações)\n");
  printf("2. População\n");
  printf("3. Área\n");
  printf("4. PIB\n");
  printf("5. Número de pontos turísticos\n");
  printf("6. Densidade demográfica \n");
  printf("7. PIB per capita \n");
  printf("8. Super poder \n");

  scanf(" %hd", &comparisonAttribute);

  /* Realizar a comparação a partir do atributo selecionado */
  switch (comparisonAttribute)
  {
  case 1:
    /* Mostrar as informações na tela  */
    printf("\nInformações da Carta 1:\n");
    printf("País: %s\n", countryName1);
    printf("Estado: %2s\n", state1);
    printf("Código: %4s\n", letterCode1);
    printf("Nome da Cidade: %s\n", cityName1);
    printf("População: %lld\n", population1);
    printf("Área: %.2f\n", area1);
    printf("PIB: %.2f\n", GDP1);
    printf("PIB per Capita: %.2f\n", GDPPerCapita1);
    printf("Densidade demográfica: %.2f\n", populationDensity1);
    printf("Número de Pontos Turísticos: %hu\n", touristAttractions1);
    printf("Super poder: %.2f\n\n", superPower1);

    printf("Informações da Carta 2:\n");
    printf("País: %s\n", countryName2);
    printf("Estado: %2s\n", state2);
    printf("Código: %4s\n", letterCode2);
    printf("Nome da Cidade: %s\n", cityName2);
    printf("População: %lld\n", population2);
    printf("Área: %.2f\n", area2);
    printf("PIB: %.2f\n", GDP2);
    printf("PIB per Capita: %.2f\n", GDPPerCapita2);
    printf("Densidade demográfica: %.2f\n", populationDensity2);
    printf("Número de Pontos Turísticos: %hu\n", touristAttractions2);
    printf("Super poder: %.2f", superPower2);
    break;

  case 2:
  {
    /* Para a execução caso for empate  */
    if (population1 == population2)
    {
      printf("\nEmpate!\n");
      break;
    }

    /* Realizar a comparação da população  */
    unsigned short int resultPopulation;

    if (population1 > population2)
      resultPopulation = 1;
    else
      resultPopulation = 2;

    /* Mostrar o resultado na tela  */
    printf("\nPopulações das cartas:\n");
    printf("Carta 1 - %s (%s - %s): %lld\n", cityName1, state1, countryName1, population1);
    printf("Carta 2 - %s (%s - %s): %lld\n", cityName2, state2, countryName2, population2);
    printf("Resultado: Carta %hu venceu\n", resultPopulation);
    break;
  }

  case 3:
  {
    /* Para a execução caso for empate  */
    if (area1 == area2)
    {
      printf("\nEmpate!\n");
      break;
    }

    /* Realizar a comparação da área  */
    unsigned short int resultArea;

    if (area1 > area2)
      resultArea = 1;
    else
      resultArea = 2;

    /* Mostrar o resultado na tela  */
    printf("\nÀreas das cartas:\n");
    printf("Carta 1 - %s (%s - %s): %.2f\n", cityName1, state1, countryName1, area1);
    printf("Carta 2 - %s (%s - %s): %.2f\n", cityName2, state2, countryName2, area2);
    printf("Resultado: Carta %hu venceu\n", resultArea);
    break;
  }

  case 4:
  {
    /* Para a execução caso for empate  */
    if (GDP1 == GDP2)
    {
      printf("\nEmpate!\n");
      break;
    }

    /* Realizar a comparação do PIB  */
    unsigned short int resultGDP;

    if (GDP1 > GDP2)
      resultGDP = 1;
    else
      resultGDP = 2;

    /* Mostrar o resultado na tela  */
    printf("\nPIB das cartas:\n");
    printf("Carta 1 - %s (%s - %s): %.2f\n", cityName1, state1, countryName1, GDP1);
    printf("Carta 2 - %s (%s - %s): %.2f\n", cityName2, state2, countryName2, GDP2);
    printf("Resultado: Carta %hu venceu\n", resultGDP);
    break;
  }

  case 5:
  {
    /* Para a execução caso for empate  */
    if (touristAttractions1 == touristAttractions2)
    {
      printf("\nEmpate!\n");
      break;
    }

    /* Realizar a comparação dos pontos turísticos  */
    unsigned short int resultTouristAttractions;

    if (touristAttractions1 > touristAttractions2)
      resultTouristAttractions = 1;
    else
      resultTouristAttractions = 2;

    /* Mostrar o resultado na tela  */
    printf("\nPontos turísticos das cartas:\n");
    printf("Carta 1 - %s (%s - %s): %hu\n", cityName1, state1, countryName1, touristAttractions1);
    printf("Carta 2 - %s (%s - %s): %hu\n", cityName2, state2, countryName2, touristAttractions2);
    printf("Resultado: Carta %hu venceu\n", resultTouristAttractions);
    break;
  }

  case 6:
  {
    /* Para a execução caso for empate  */
    if (populationDensity1 == populationDensity2)
    {
      printf("\nEmpate!\n");
      break;
    }

    /* Realizar a comparação da densidade demográfica  */
    unsigned short int resultPopulationDensity;

    if (populationDensity1 < populationDensity2)
      resultPopulationDensity = 1;
    else
      resultPopulationDensity = 2;

    /* Mostrar o resultado na tela  */
    printf("\nDensidades demográficas das cartas:\n");
    printf("Carta 1 - %s (%s - %s): %2f\n", cityName1, state1, countryName1, populationDensity1);
    printf("Carta 2 - %s (%s - %s): %2f\n", cityName2, state2, countryName2, populationDensity2);
    printf("Resultado: Carta %hu venceu\n", resultPopulationDensity);
    break;
  }

  case 7:
  {
    /* Para a execução caso for empate  */
    if (GDPPerCapita1 == GDPPerCapita2)
    {
      printf("\nEmpate!\n");
      break;
    }

    /* Realizar a comparação do PIB per capita  */
    unsigned short int resultGDPPerCapita;

    if (GDPPerCapita1 > GDPPerCapita2)
      resultGDPPerCapita = 1;
    else
      resultGDPPerCapita = 2;

    /* Mostrar o resultado na tela  */
    printf("\nPIB per capita das cartas:\n");
    printf("Carta 1 - %s (%s - %s): %2f\n", cityName1, state1, countryName1, GDPPerCapita1);
    printf("Carta 2 - %s (%s - %s): %2f\n", cityName2, state2, countryName2, GDPPerCapita2);
    printf("Resultado: Carta %hu venceu\n", resultGDPPerCapita);
    break;
  }

  case 8:
  {
    /* Para a execução caso for empate  */
    if (superPower1 == superPower2)
    {
      printf("\nEmpate!\n");
      break;
    }

    /* Realizar a comparação do Super poder */
    unsigned short int resultSuperPower;

    if (superPower1 > superPower2)
      resultSuperPower = 1;
    else
      resultSuperPower = 2;

    /* Mostrar o resultado na tela  */
    printf("\nSuper poder das cartas:\n");
    printf("Carta 1 - %s (%s - %s): %2f\n", cityName1, state1, countryName1, superPower1);
    printf("Carta 2 - %s (%s - %s): %2f\n", cityName2, state2, countryName2, superPower2);
    printf("Resultado: Carta %hu venceu\n", resultSuperPower);
    break;
  }

  default:
    printf("\nAtributo invalido\n");
    break;
  }

  return 0;
}
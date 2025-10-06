#include <stdio.h>

int main()
{
  /* Variáveis da cidade 1 */
  char state1[3], letterCode1[5], cityName1[50];
  short int touristAttractions1;
  float area1, GDP1, populationDensity1, GDPPerCapita1, superPower1;
  unsigned long long int population1;

  /* Variáveis da cidade 2 */
  char state2[3], letterCode2[5], cityName2[50];
  short int touristAttractions2;
  float area2, GDP2, populationDensity2, GDPPerCapita2, superPower2;
  unsigned long long int population2;

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

  printf("Estado:\n");
  scanf(" %s", state1);

  printf("Código:\n");
  scanf("%s", letterCode1);

  printf("Nome da Cidade:\n");
  scanf("%s", cityName1);

  printf("População:\n");
  scanf("%llu", &population1);

  printf("Área:\n");
  scanf("%f", &area1);

  printf("PIB:\n");
  scanf("%f", &GDP1);

  printf("Número de Pontos Turísticos:\n");
  scanf("%hd", &touristAttractions1);

  /* Verificação de valores */
  /*printf("Estado: %2s\n", state1);
  printf("Código: %4s\n", letterCode1);
  printf("Nome da Cidade: %s\n", cityName1);
  printf("População: %llu\n", population1);
  printf("Área: %.2f\n", area1);
  printf("PIB: %.2f\n", GDP1);
  printf("Número de Pontos Turísticos: %hd\n", touristAttractions1);*/

  /* Calcular a desidade democrafica, PIB per capita cidade e super poder da cidade 1 */
  populationDensity1 = (float)population1 / area1;
  GDPPerCapita1 = (float)GDP1 / population1;
  superPower1 = (float)(population1 + area1 + GDP1 + touristAttractions1 + GDPPerCapita1) - populationDensity1;

  /* Obter os dados da cidade 2 */
  printf("Informe os dados da segunda cidade.\n");

  printf("Estado:\n");
  scanf(" %s", &state2);

  printf("Código:\n");
  scanf("%s", &letterCode2);

  printf("Nome da Cidade:\n");
  scanf("%s", &cityName2);

  printf("População:\n");
  scanf("%llu", &population2);

  printf("Área:\n");
  scanf("%f", &area2);

  printf("PIB:\n");
  scanf("%f", &GDP2);

  printf("Número de Pontos Turísticos:\n");
  scanf("%hd", &touristAttractions2);

  /* Verificação de valores */
  /*printf("Estado: %2s\n", state2);
  printf("Código: %4s\n", letterCode2);
  printf("Nome da Cidade: %s\n", cityName2);
  printf("População: %llu\n", population2);
  printf("Área: %.2f\n", area2);
  printf("PIB: %.2f\n", GDP2);
  printf("Número de Pontos Turísticos: %hd\n", touristAttractions2);*/

  /* Calcular a desidade democrafica, PIB per capita cidade e super poder da cidade 2 */
  populationDensity2 = (float)population2 / area2;
  GDPPerCapita2 = (float)GDP2 / population2;
  superPower2 = (float)(population2 + area2 + GDP2 + touristAttractions2 + GDPPerCapita2) - populationDensity2;

  /* Realziar a comparação a partir da população */
  unsigned short int resultPopulation;

  if (population1 > population2)
    resultPopulation = 1;
  else
    resultPopulation = 2;

  /* Mostrar o resultado na tela  */
  printf("Carta 1 - %s (%s): %llu\n", cityName1, state1, population1);
  printf("Carta 2 - %s (%s): %llu\n", cityName2, state2, population2);
  printf("Resultado: Carta %hu venceu\n", resultPopulation);
  return 0;
}
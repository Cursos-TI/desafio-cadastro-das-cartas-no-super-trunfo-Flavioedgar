#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    char cidade[50];
    float area,PIB,densidadepopulacional,PIB_pe_capta;
    unsigned int populacao,pontosturistico;

    char cidade1[50];
    float area1,PIB1,densidadepopulacional1,PIB_pe_capta1;
    unsigned int populacao1,pontosturistico1;
   
    //cadastro das cartas
    printf("Carta 1\n");
    printf("Insira o nome dá Cidade:\n");
    scanf(" %[^\n]", cidade);
    
    printf("Digite a quantidade da população:\n");
    scanf("%u", &populacao);

    printf("Digite a área:\n");
    scanf("%f", &area);

    printf("Digite o PIB:\n");
    scanf("%f", &PIB);

    printf("Digite os pontos turisticos:\n");
    scanf("%u", &pontosturistico);
    printf("\n");
    
 //cadastro das cartas
    printf("Carta 2\n");
    printf("Insira o nome dá Cidade:\n");
    scanf(" %[^\n]", cidade1);
    
    printf("Digite a quantidade da população:\n");
    scanf("%u", &populacao1);

    printf("Digite a área:\n");
    scanf("%f", &area1);

    printf("Digite o PIB:\n");
    scanf("%f", &PIB1);

    printf("Digite os pontos turisticos:\n");
    scanf("%u", &pontosturistico1);

    // Objetivo de encontra a densidade populacional e o PIB per Capta, para a primeira carta
    densidadepopulacional = populacao / area;
    PIB_pe_capta = PIB / populacao;
    printf("\n");


    printf("Carta 1\n");
    printf("Nome da cidade: %s\n",cidade);
    printf("População: %u\n",populacao);
    printf("Àrea: %.2f km²\n",area);
    printf("PIB: %.2f bilhões de reais\n",PIB);
    printf("Pontos turísticos: %u\n",pontosturistico);
    printf("Densidade Populacional: %.2f hab/km²\n",densidadepopulacional);
    printf("PIB per Capita: %.2f Reais\n\n",PIB_pe_capta);
   
    // Objetivo de encontra a densidade populacional e o PIB per Capta, para a segunda carta
    densidadepopulacional1 = populacao1 / area1;
    PIB_pe_capta1 = PIB1 / populacao1;

    printf("Carta 2\n");
    printf("Nome da cidade: %s\n",cidade1);
    printf("População: %u\n",populacao1);
    printf("Àrea: %.2f km²\n",area1);
    printf("PIB: %.2f bilhões de reais\n",PIB1);
    printf("Pontos turísticos: %u\n",pontosturistico1);
    printf("Densidade Populacional: %.2f hab/km²\n",densidadepopulacional1);
    printf("PIB per Capita: %.2f Reais\n\n",PIB_pe_capta1);

// Menu interativo

    int opcao;
    printf("####Comparação de cartas####\n");
    printf("1. População\n");
    printf("2. Àrea\n");
    printf("3. PIB\n");
    printf("4. Pontos Turísticos\n");
    printf("5. Densidade Populacional\n");
    printf("6. PIB Per Capita\n");
    printf("Escolha uma opção:\n");
    scanf("%d", &opcao);

// Comparação dos atributos escolhidos

    switch (opcao)
    {
    case 1:
    printf("Comparação de Cartas(Atributo: População)\n");
    printf("Carta 1 - %s: %u\n",cidade,populacao);
    printf("Carta 2 - %s: %u\n",cidade1,populacao1);
    if(populacao > populacao1){
        printf("Resultado: Carta 1 (%s) venceu.\n",cidade);
    }else if(populacao < populacao1){
        printf("Resultado: Carta 2 (%s) venceu.\n",cidade1);
    }else{
        printf("Resultado: Empate\n");
    }
        break;
    
    case 2:
    printf("Comparação de Cartas(Atributo: Àrea)\n");
    printf("Carta 1 - %s: %.2f\n",cidade,area);
    printf("Carta 2 - %s: %.2f\n",cidade1,area1);
    if(area > area1){
        printf("Resultado: Carta 1 (%s) venceu.\n",cidade);
    }else if(area < area1){
        printf("Resultado: Carta 2 (%s) venceu.\n",cidade1);
    }else{
        printf("Resultado: Empate\n");
    }
        break;
    
    case 3:
    printf("Comparação de Cartas(Atributo: PIB)\n");
    printf("Carta 1 - %s: %.2f\n",cidade,PIB);
    printf("Carta 2 - %s: %.2f\n",cidade1,PIB1);
    if(PIB > PIB1){
        printf("Resultado: Carta 1 (%s) venceu.\n",cidade);
    }else if(PIB < PIB1){
        printf("Resultado: Carta 2 (%s) venceu.\n",cidade1);
    }else{
        printf("Resultado: Empate\n");
    }
        break;
    
    case 4:
    printf("Comparação de Cartas(Atributo: Pontos Turísticos)\n");
    printf("Carta 1 - %s: %u\n",cidade,pontosturistico);
    printf("Carta 2 - %s: %u\n",cidade1,pontosturistico1);
    if(pontosturistico > pontosturistico1){
        printf("Resultado: Carta 1 (%s) venceu.\n",cidade);
    }else if(pontosturistico < pontosturistico1){
        printf("Resultado: Carta 2 (%s) venceu.\n",cidade1);
    }else{
        printf("Resultado: Empate\n");
    }
        break;

    case 5:
    printf("Comparação de Cartas(Atributo: Densidade Populacional)\n");
    printf("Carta 1 - %s: %.2f\n",cidade,densidadepopulacional);
    printf("Carta 2 - %s: %.2f\n",cidade1,densidadepopulacional1);
    if(densidadepopulacional < densidadepopulacional1){
        printf("Resultado: Carta 1 (%s) venceu.\n",cidade);
    }else if(densidadepopulacional > densidadepopulacional1){
        printf("Resultado: Carta 2 (%s) venceu.\n",cidade1);
    }else{
        printf("Resultado: Empate\n");
    }
        break;

    case 6:
    printf("Comparação de Cartas(Atributo: PIB per Capta)\n");
    printf("Carta 1 - %s: %.2f\n",cidade,PIB_pe_capta);
    printf("Carta 2 - %s: %.2f\n",cidade1,PIB_pe_capta1);
    if(PIB_pe_capta > PIB_pe_capta1){
        printf("Resultado: Carta 1 (%s) venceu.\n",cidade);
    }else if(PIB_pe_capta < PIB_pe_capta1){
        printf("Resultado: Carta 2 (%s) venceu.\n",cidade1);
    }else{
        printf("Resultado: Empate\n");
    }
        break;
    
    default:
        printf("Erro, Opção invalida!\n");
        break;
    }


    
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    return 0;
}
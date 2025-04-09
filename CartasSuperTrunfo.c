#include <stdio.h>         // Inclusão da biblioteca

struct Cidade {            // Definição da Estrutura (Cidade). Essa estrutura agrupa todos os dados que representam uma cidade.
    char estado;           // Letra do estado (A a H)
    char codigo[4];        // Código da carta (ex: A01, B03)
    char nome[100];        // Nome da cidade
    int populacao;         // População da cidade
    float area;            // Área da cidade em km²
    float pib;             // PIB da cidade em bilhões de reais
    int pontosTuristicos;  // Número de pontos turísticos

};

//Função exibircarta: Essa função recebe uma cidade e o número da carta (1 ou 2) e imprime todos os dados formatados.
void exibircarta(struct Cidade cidade, int numerocarta){
    printf("\nCarta %d: \n", numerocarta);
    printf("Estado: %c\n", cidade.estado);
    printf("Código: %s\n", cidade.codigo);
    printf("Nome da Cidade: %s\n", cidade.nome);
    printf("População da Cidade: %d\n", cidade.populacao);
    printf("Área da cidade em km²: %.2f\n", cidade.area);
    printf("PIB da Cidade: %.2f\n", cidade.pib);
    printf("Número de Pontos Turísticos: %d\n", cidade.pontosTuristicos);
}

int main(){         //Função main() Aqui acontece a execução principal do programa.
    struct Cidade carta1, carta2;   // Declara duas variáveis do tipo Cidade, para armazenar os dados das duas cartas.
    printf("\n**************************************** SUPER TRUNFO ****************************************: \n\n");

    printf("\n=============== INSIRA DADOS DA CARTA [1] ===============: \n\n");

    printf("Estado (A a D): ");
    scanf(" %c", &carta1.estado);
    printf("Código da Carta (Exp: A01, B03): \n");
    scanf(" %s", &carta1.codigo);
    printf("Nome da Cidade: \n");
    scanf("%s", &carta1.nome);
    printf("População da Cidade: \n");
    scanf("%d", &carta1.populacao);
    printf("Área da cidade em km²: \n");
    scanf("%f", &carta1.area);
    printf("PIB da Cidade: \n");
    scanf("%f", &carta1.pib);
    printf("Número de Pontos Túristicos: \n");
    scanf("%d", &carta1.pontosTuristicos);
    
    printf("\n\n=============== INSIRA DADOS DA CARTA [2] ===============: \n\n");

    printf("Estado (A a D): \n");
    scanf(" %s", &carta2.estado);
    printf("Código da Carta (Exp: A01, B03): \n");
    scanf("%s", &carta2.codigo);
    printf("Nome da Cidade: \n");
    scanf("%s", &carta2.nome);
    printf("População da Cidade: \n");
    scanf("%d", &carta2.populacao);
    printf("Área da cidade em km²: \n");
    scanf("%f", &carta2.area);
    printf("PIB da Cidade: \n");
    scanf("%f", &carta2.pib);
    printf("Número de Pontos Túristicos: \n");
    scanf("%d", &carta2.pontosTuristicos);

    //Chama a função que imprime todos os dados formatados.
    exibircarta(carta1, 1);     
    exibircarta(carta2, 2);    

    return 0;
}



//DADOS PRIMITIVOS:
//int = Os inteiros são números sem casas decimais. Eles são usados quando você precisa contar ou trabalhar com números inteiros. Por exemplo, (int idade = 25;) armazena a idade de uma pessoa.
//float e double Exp1= São tipos de pontos FLUTUANTES, Os números de ponto flutuante são usados para representar números com casas decimais. Existem dois tipos principais: float e double . 
//float e double Exp2= A diferença entre eles é a precisão. float ocupa menos espaço na memória, mas tem menos precisão do que double. Exemp: (float altura = 1.75;) (double salario = 3000.50;)
//char = O tipo char é usado para armazenar um único caractere, como uma letra ou um símbolo.
//char nome[20] = ''Alice''; Uso de strings = Além de armazenar caracteres individuais, podemos também trabalhar com sequências de caracteres, conhecidas como strings. Em C, strings são representadas como arrays (vetores) de caracteres terminados com um caractere nulo ('\0'). 
//Vamos apresentar rapidamente o conceito de strings, pois será necessário para a realização do desafio. Por exemplo, a variável nome abaixo será um array (vetor) de char e pode armazenar um nome.

//A SEGUIR, VOCÊ TEM UMA LISTA DOS PRINCIPAIS ESPECIFICADORES UTILIZADOS:
/*
%d: Imprime um inteiro no formato decimal.
%i: Equivalente a %d.
%f: Imprime um número de ponto flutuante no formato padrão.
%e: Imprime um número de ponto flutuante na notação científica.
%c: Imprime um único caractere.
%s: Imprime uma cadeia (string) de caracteres.
*/
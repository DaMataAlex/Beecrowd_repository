#include <stdio.h>
#include <math.h>

int main(){

    double comprimento, largura, porcentagem_de_uso;
    double area_casa, area_terreno;

    scanf("%lf %lf %lf", &comprimento, &largura, &porcentagem_de_uso);

    area_casa = largura * comprimento;
    area_terreno = area_casa / (porcentagem_de_uso / 100.0);

    double final = sqrt(area_terreno);
    printf("%d\n", (int)final);

    return 0;

}
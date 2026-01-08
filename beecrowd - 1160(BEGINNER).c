#include <stdio.h>

int main() {

    int test_cases;
    scanf("%d", &test_cases);

    while (test_cases--) {

        int PA, PB;
        double G1, G2;

        scanf("%d %d %lf %lf", &PA, &PB, &G1, &G2);

        int years = 0;

        while (PA <= PB && years <= 100) {
            PA += (int)(PA * (G1 / 100.0));
            PB += (int)(PB * (G2 / 100.0));
            years++;
        }

        if (years > 100) {
            printf("Mais de 1 seculo.\n");
        } else {
            printf("%d anos.\n", years);
        }
    }

    return 0;
}

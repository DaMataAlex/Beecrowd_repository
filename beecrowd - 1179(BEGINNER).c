#include <stdio.h>

int main() {

    int par[5];
    int impar[5];
    int number;
    int counterpar = 0;
    int counterimpar = 0;

    for (int i = 0; i < 15; i++) {
        scanf("%d", &number);

        if (number % 2 == 0) {
            par[counterpar] = number;
            counterpar++;
        } else {
            impar[counterimpar] = number;
            counterimpar++;
        }

        if (counterpar == 5) {
            for (int j = 0; j < 5; j++) {
                printf("par[%d] = %d\n", j, par[j]);
            }
            counterpar = 0;
        }

        if (counterimpar == 5) {
            for (int j = 0; j < 5; j++) {
                printf("impar[%d] = %d\n", j, impar[j]);
            }
            counterimpar = 0;
        }
    }

    for (int i = 0; i < counterimpar; i++) {
        printf("impar[%d] = %d\n", i, impar[i]);
    }

    for (int i = 0; i < counterpar; i++) {
        printf("par[%d] = %d\n", i, par[i]);
    }

    return 0;
}

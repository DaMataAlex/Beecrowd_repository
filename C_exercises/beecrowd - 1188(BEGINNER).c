#include <stdio.h>
#define MAX 12

int main() {

    char ops;
    scanf(" %c", &ops);

    double array[MAX][MAX];

    for (int i = 0; i < MAX; i++) {
        for (int j = 0; j < MAX; j++) {
            scanf("%lf", &array[i][j]);
        }
    }

    double total = 0.0;

    for (int i = 0; i < MAX; i++) {
        for (int j = 0; j < MAX; j++) {
            if (i > j && i + j > 11) {
                total += array[i][j];
            }
        }
    }

    if (ops == 'S') {
        printf("%.1lf\n", total);
    } else {
        printf("%.1lf\n", total / 30.0);
    }

    return 0;
}

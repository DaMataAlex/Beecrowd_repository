#include <stdio.h>

int main(){

    char operation;
    scanf("%c", &operation);

    float array[12][12];

    for(int i = 0; i < 12; i++){
        for(int j = 0; j < 12; j++){
            scanf("%f", &array[i][j]);
        }
    }

    float total = 0;
    for(int i = 0; i < 12; i++){
        for(int j = 0; j < 12; j++){
            if((i + j) <= 10){
                total += array[i][j];
            }
        }
    }

    if(operation == 's'){
        printf("%.1f\n", total);
    }else{
        total /= 66.0;
        printf("%.1f\n", total);
    }

    return 0;
}
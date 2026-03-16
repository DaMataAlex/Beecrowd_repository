#include <stdio.h>
#define MAX 12

int main(){

    char ops;
    scanf("%c", &ops);

    float array[MAX][MAX];

    for(int i = 0; i < MAX; i++){
        for(int j = 0; j < MAX; j++){
            scanf("%f", &array[i][j]);
        }
    }

    float total = 0;
    for(int i = 0; i < MAX; i++){
        for(int j = MAX - 1; j > -1; j--){
            if((i + j) > MAX - 1){
                total += array[i][j];
            }
        }
    }

    if(ops == 'S'){
        printf("%.1f\n", total);
    }else{
        printf("%.1f\n", total/66.0);
    }

    return 0;
}
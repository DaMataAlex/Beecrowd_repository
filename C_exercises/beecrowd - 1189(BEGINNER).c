#include <stdio.h>
#define MAX 12

int main(){
    
    char ops;
    scanf(" %c", &ops);
    
    double array[12][12];
    
    for(int i = 0; i < 12; i++){
        for(int j = 0; j < 12; j++){
            scanf("%lf", &array[i][j]);
        }
    }
    
    double total = 0;
    int count = 0;
    
    for(int i = 0; i < 12; i++){
        for(int j = 0; j < 12; j++){
            if((i + j ) < 11 && (j < i)){
                count++;
                total += array[i][j];
            }
        }
    }
    
    if(ops == 'S'){
        printf("%.1lf\n", total);
    }else{
        printf("%.1lf\n", total/count);
    }

return 0;
}
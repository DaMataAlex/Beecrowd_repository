#include <stdio.h>

int main(){

    int cases;
    scanf("%d", &cases);

    for(int i = 0; i < cases; i++){

        int number;
        scanf("%d", &number);
        int sum = 0;

        for(int j = 1; j < number; j++){
            
            if((number % j) == 0){
                sum += j;
            }
        }

        if(sum == number){
            printf("%d eh perfeito\n", number);
        }else{
            printf("%d nao eh perfeito\n", number);
        }

        sum = 0;
    }

    return 0;
}
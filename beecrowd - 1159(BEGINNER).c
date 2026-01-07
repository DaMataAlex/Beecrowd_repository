#include <stdio.h>

int main(){

    int cases;

    while(1){
        scanf("%d", &cases);
        if(cases == 0){
            break;
        }

        int total = 0;
        int counter = 0;
        while(counter != 5){
            if((cases % 2) == 0){
                total += cases;
                counter++;
            }
            cases++;
        }
        printf("%d\n", total);
        total = 0;
    }

    return 0;
}
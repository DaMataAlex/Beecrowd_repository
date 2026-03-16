#include <stdio.h>

int main(){

    float age;
    float average = 0;
    float counter = 0;

    while(1){
        scanf("%f", &age);

        if(age >= 0){
            average += age;
            counter++;
        }else{
            break;
        }
    }

    average = average / counter;

    printf("%.2f\n", average);

    return 0;
}

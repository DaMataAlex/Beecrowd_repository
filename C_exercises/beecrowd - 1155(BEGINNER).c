#include <stdio.h>

int main(){

    float a;
    float total = 1.0;

    for(int i = 2; i < 101; i++){
        total+= 1.0/i;
    }

    printf("%.2f\n", total);

    return 0;
}
#include <stdio.h>

int main(){

    float d = 1;
    float total = 0;

    for(int i = 1; i < 40; i+= 2){
        total = total + i/d;
        d = d * 2;
    }

    printf("%.2f\n", total);

    return 0;
}
 
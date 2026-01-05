#include <stdio.h>

int main(){

    int cases;
    scanf("%d", &cases);
    int sum = 0;

    for(int i = 0; i < cases; i++){
        int starthere;
        int howmuchodds;

        scanf("%d %d", &starthere, &howmuchodds);
        
        int i = 0;
        while(i < howmuchodds){
            if(starthere % 2 != 0){
                sum += starthere;
                i++;
            }
            starthere += 1;
        }

        printf("%d\n", sum);
        sum = 0;
        i = 0;
    }

    return 0;
}
 
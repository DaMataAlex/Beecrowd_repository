#include <stdio.h>

int prime_number(int a){
    int is_prime = 1;
    
    if(a > 0){
        for(int j = 2; j < a - 1; j++){
            if(a % j == 0){
                is_prime = 0;
                printf("%d nao eh primo\n", a);
                return is_prime;
            }
        }
    }
    
    if(a < 0){
        for(int j = -2; j > a + 1; j--){
            if(a % j == 0){
                is_prime = 0;
                printf("%d nao eh primo\n", a);
                return is_prime;
            }
        }
    }
    
    printf("%d eh primo\n", a);
    return is_prime;
    
}

int main(){
    
    int cases;
    scanf("%d", &cases);
    
    for(int i = 0; i < cases; i++){
        int number;
        scanf("%d", &number);
        prime_number(number);
    }
    
    return 0;
}
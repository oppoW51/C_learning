#include <stdio.h>

int main(void){

    //Получаем число
    int num;
    scanf("%d", &num);
    
    if (num % 2 == 0 && num % 3 == 0){
        printf("Divisible by 3 and 2\n"); 
    }else if (num % 3 == 0){
        printf("Divisible by 3\n");
    }else if (num % 2 == 0){
        printf("Even\n");
    }else{
        printf("Odd and not divisible by 3\n");
    }
    return 0;
}

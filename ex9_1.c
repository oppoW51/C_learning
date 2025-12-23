#include <stdio.h>

int main(void){
    
    int numbers[5];
    
    printf("Введите 5 чисел: \n");
    for (int i = 0; i < 5; i++){
        scanf("%d", &numbers[i]);
    }
    for (int i = 4; i >= 0; i--){
        printf("%d ", numbers[i]);
    }
    return 0;
}


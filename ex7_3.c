#include <stdio.h>

int main(void){

    int len;
    printf("Введите длину стороны квадрата: ");
    scanf("%d", &len);

    for (int i = 0; i < len; i++){
        for (int j = 0; j < len; j++){
            
            if (i == 0 || i == len - 1){
                printf("#");
            }else if (j == 0 || j == len - 1){
                printf("#");
            }else{
                printf(" ");
            }
        }
    printf("\n");
    }
    return 0;
}

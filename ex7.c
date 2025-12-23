#include <stdio.h>

int main(void){
    
    int len;
    printf("Введите длину ленты: ");
    scanf("%d", &len);

    for (int step = 0; step < len; step++){
        for (int i = 0; i < len; i++){

            if (step == i){
                printf("[*]");
            }else{
                printf("[ ]");
            }
        }
    printf("\n");

    }
    return 0;
}

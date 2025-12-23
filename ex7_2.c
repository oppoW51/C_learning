#include <stdio.h>

int main(void){

    int len;
    printf("Введите размер таблицы: ");
    scanf("%d", &len);

    for (int i = 0; i < len; i++){
        for (int j = 0; j < len; j++){

            printf("%4d", i*j);
        }
    printf("\n");
    }
    return 0;
}

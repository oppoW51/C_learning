#include <stdio.h>

int main(void){

    int temp;
    scanf("%d", &temp);

    if ((temp > 70) || (temp < -70)){
        printf("Ошибка датчика");
    }else{
        if (temp < 10){
            printf("Холодно! Включаю обогреватель");
        }else if (temp > 25){
            printf("Жарко! Включаю кондиционер");
        }else{
            printf("Норма. Режим ожидания");
        }
    }
    return 0;
}

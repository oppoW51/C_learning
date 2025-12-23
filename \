#include <stdio.h>

int main(void){

    float temps[7];
    printf("Введите температуру за неделю по порядку: \n");
    for (int i = 0; i < 7; i++){
        scanf("%f", &temps[i]);
    }
    
    float min = temps[0];
    float max = temps[0];
    float avarage;
    float sum = 0;

    for (int i = 0; i < 7; i++){
        sum += temps[i];
        if (max < temps[i]){
            max = temps[i];
        }else if (min > temps[i]){
            min = temps[i];
        }else{
            continue;
        }
    }
    avarage = sum / 7;

    printf("Средняя температура: %.2f\n", avarage);
    printf("Максимальная температура: %.2f\n", max);
    printf("Минимальная температура: %.2f\n", min);
    return 0;
}

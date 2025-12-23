#include <stdio.h>

int main(void){

    //Объявляем переменные
    int a;
    int b;

    //Записываем значения
    printf("Запишите числа a и b через пробел: ");
    scanf("%d %d", &a, &b);
    
    if (b!=0){

        //Производим вычисления и выводим результат
        printf("a + b = %d\n", a+b);
        printf("a - b = %d\n", a-b);
        printf("a * b = %d\n", a*b);
        printf("a / b = %.3f\n", (float)a/b);
        printf("a %% b = %d\n", a%b);

        return 0;
    }else{
        
        //Находим все кроме mod
        printf("a + b = %d\n", a+b);
        printf("a - b = %d\n", a-b);
        printf("a * b = %d\n", a*b);
        printf("a / b = %.3f\n", (float)a/b);
        printf("Найти остаток от деления 0 числа %d невозможно.\n", a);
        
        return 0;
    }
}

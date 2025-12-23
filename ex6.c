#include <stdio.h>

int main(void){

    int PIN = 7382;
    int tries = 3;
    int input_PIN;

    while (tries > 0){

        printf("Введите код авторизации: ");
        scanf("%d", &input_PIN);

        if (input_PIN == PIN){

            printf("Авторизация прошла успешно\n");
            return 0;
        }else{
            
            tries--;
            printf("Пароль неверный, отавшихся попыток - %d\n", tries);
        }
    }

        printf("Система заблокирована\n");
        return 0;
}

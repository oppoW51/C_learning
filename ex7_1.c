#include <stdio.h>

int main(void){

    int len;
    printf("Введите высоту лесенки: ");
    scanf("%d", &len);

    for (int h = 1; h <= len; h++){
        for (int w = 1; w <= h; w++){

            printf("#");

        }
    printf("\n");
    }
    return 0;
}

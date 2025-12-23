#include <stdio.h>

int main(void){

    char words[100];

    printf("Запишите текст: ");
    scanf("%s", words);

    for (int i = 0; words[i] != '\0'; i++){

        if (words[i] >= 'a' && words[i] <= 'z'){

            words[i] -= 32;
        }

    }
    
    printf("%s\n", words);
    return 0;
}

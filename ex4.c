#include <stdio.h>

int main(void){

    for (int i = 1; i <= 100; i++){
        printf("i = %3d, i**2 = %8d\n", i, i*i);
    }
    return 0;
}

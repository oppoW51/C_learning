#include <stdio.h>

int main(void){
    
    //Объявляем переменные
    int age;
    float high;
    double weight;
    char ch_name;

    //Считываем данные и записываем в переменные
    printf("Введите ваш возраст: ");
    scanf("%d", &age);
    printf("Введите ваш рост (с точностью до десятых): ");
    scanf("%f", &high);
    printf("Введите ваш вес (с точностю до сотых): ");
    scanf("%lf", &weight);
    printf("Введите первую букву вашего имени: ");
    scanf(" %c", &ch_name);

    //Выводим ответ
    printf("Здравствуйте %c..., вам %d лет, ваш рост составляет %.1f сантиметров, вес - %.2f килограмм.\n", ch_name, age, high, weight);
    
    return 0;
}

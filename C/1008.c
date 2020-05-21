#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number, hour;
    float salary, hour_value;

    scanf("%d", &number);
    scanf("%d", &hour);
    scanf("%f", &hour_value);

    salary = hour * hour_value;
    printf("NUMBER = %d\n", number);
    printf("SALARY = U$ %.2f\n", salary);
    return 0;
}
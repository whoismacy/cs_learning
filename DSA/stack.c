#include <stdio.h>

double multiplybytwo(double input)
{
    double twice = input * 2.0;
    return twice;
}
int main()
{
    int age = 30;
    double salary = 12345.67;
    double mylist[3] = {1.2, 2.3, 4.5};

    printf("Double your salary to %.3f\n", multiplybytwo(salary));

    return 0;
}
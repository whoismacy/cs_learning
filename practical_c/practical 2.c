#include<stdio.h>
double square(double x)// void changes depending on the value we are returning
{
    double result = x * x;
    return result;
}
int main()
{
    double x = square(3.14);
    printf("the value is %lf",x);
    return 0;
}
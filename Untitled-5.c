#include <stdio.h>
void birthay(char gals[], int adf) 
{
    printf("\n Happy birthday dear %s!", gals);
    printf("\n You are %d years old!\n", adf);
}
int main()
{
    char name[] = "Bro";
    char gals[] = "were";
    int age = 43;
    int adf = 25;
    birthay(name, age);
    return 0;
}
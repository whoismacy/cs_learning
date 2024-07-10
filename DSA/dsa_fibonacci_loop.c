# include <stdio.h>
int main(){
    int num1 = 0;
    int num2 = 1;
    int fibonacci;
    printf("%d\n", num1);
    printf("%d\n", num2);
    for(fibonacci = 0; fibonacci < 18; fibonacci++)
    {
        int newfibo = num1 + num2;
        printf("%d\n", newfibo);
        num1 = num2;
        num2 = newfibo;
    }
    return 0;
}
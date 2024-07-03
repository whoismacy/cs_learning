#include <stdio.h>

/**int main() {
    float average_marks;

    printf("Enter the student's average marks: ");
    scanf("%f", &average_marks);

    switch ((int)average_marks / 10) {
        case 10:
        case 9:
        case 8:
        case 7:
            printf("First Class honours\n");
            break;
        case 6:
            printf("Second Class honours-Upper Division\n");
            break;
        case 5:
            printf("Second Class honours - Lower Division\n");
            break;
        case 4:
            printf("Pass\n");
            break;
        default:
            printf("Fail\n");
         
}

return 0;
}**/
/*int main (){
    int x[5] = {4, 8, 2, 3, 9};
    int *p;
    p = x;
    printf("%d ", *p);
    p++;
    printf("%d ", *p);
    p++;
    printf("%d ", *p);
    return 0;
}*/
/*int main (){
    int num[5] = {1, 2, 3, 4, 5};
    int i;
    for(i=0; i<1; i++)
    {
        printf("%d\n",num[i]);
    }
    return 0;
}*/
/*int main(){
    printf("\"professor\"");
    return 0;
}*/
/*float customer_amount(float a)
{   
    float b;
    if(a >= 1000)
    {
        b = 0.05*a ;
        return b;
    }
    else 
    {
       printf("<<<No Discount Offered>>>");
       return 0;
    }
}
int main(){
    float amount, pay;
    printf("enter the customers amount: ");
    scanf("%f", &amount);
    float discount = customer_amount(amount);
    printf("\ndiscounted amount: %f\n", discount);
    pay = amount - discount;
    printf("Amount to pay: %f", pay);
    return 0;
}*/
/*int main(){
    int num, summation = 0;
    for (num=1; num<=10; num +1)
    {
        num = num + 1;
        printf("%d\n", num);
    }
    return 0;
}*/
/*float volume_cylinder(float radius, float height)
{
    float result;
    float const pi = 3.14159;
    result = pi*radius*radius*height;
    return result;
}
int main(){
    float radius, height, volume;
    printf("Enter Radius: ");
    scanf("%f", &radius);
    printf("Enter Height: ");
    scanf("%f", &height);
    volume = volume_cylinder(radius, height);
    printf("The volume is: %.2f", volume);
    return 0;
}*/
int main(){
    int grade;
    printf("Enter the grade scored: ");
    scanf("%d", &grade);
    if (grade >= 51 && grade <= 60)
    {
        printf("E");
    }
    else if (grade <= 70)
    {
        printf("D");
    }
    else if (grade <= 80)
    {
        printf("C");
    }
    else if (grade <= 90)
    {
        printf("B");
    }
    else if (grade <= 100)
    {
        printf("A");
    }
    else 
    {
        printf("grade out of range.");
    }
    return 0;
}
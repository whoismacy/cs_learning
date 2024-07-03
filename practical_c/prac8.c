#include <stdio.h>
/**int main(){
    int nums[] = {20, 25, 30, 40,45};
    printf("%lu ", sizeof(nums));//sizeof returns the size in bytes "%lu"--calls it
    int length;
    length = sizeof(nums)/sizeof(nums[0]);
    printf("%d",length);
    int index;
    for (index=0; index<length; index++)
    {
        printf(" %d ",nums[length]);
    }
    return 0;
}**/
//ask users to give their ages, calculate the sum, average and the oldest
int main()
{
    int age[6], i;
    int count = 0;
    int sum = 0;
    int largest = 0;
    printf("Key in your ages: \n");
    for (i=0; i<=5; i++)
    {
        scanf("%d\n", &age[i]);
    }
    for (i=0; i<=5; i++)
    {
        sum = sum + age[i];
        count ++ ;
    }
    double average_age = sum/6;
    for (i=0; i<=5; i++)
    {
        if (age[i] > largest)
        {
            largest = age[i];
        }
        count ++;
    }

    printf("The sum is: %d \n",sum);
    printf("The largest is: %d \n",largest);
    printf("The average age is: %lf",average_age);
    return 0;
}

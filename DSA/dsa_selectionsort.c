#include<stdio.h>
void selection_sort(int low, int high, int a[]);
int main()
{
    int num, i = 0;
    printf("Enter the number of elements.\n");
    scanf("%d", &num);

    int array[num]; 

    printf("Key in the elements. \n");
    for(i=0; i<num; i++)
    {
        scanf("%d",  &array[i]);
    }

    selection_sort(0, num-1, array);

    printf("Elements after sorting are: \n");
    for (i=0; i<num; i++)
    {
        printf("%d ", array[i]);
    }

    return 0;
}
void selection_sort(int low, int high, int a[])
{
    int i = 0;
    int j = 0;
    int temp = 0;
    int min_index;
    for(i = low; i <= high; i++)
    {
        min_index = i;

        for(j = i+1; j <= high; j++)
        {
            if (a[j] < a[min_index])
            {
                min_index = j;
            }

        }
        temp = a[i];
        a[i] = a[min_index];
        a[min_index] = temp;
    }
}
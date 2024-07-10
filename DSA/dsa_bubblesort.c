#include <stdio.h>
void bubble_sort(int array[], int size);
int main()
{
    int array[9] = {89, 5, 17, 8, -3, -10, 100, 46, -1};
    //int num_of_elements = sizeof(array) / sizeof(array[0]);
    int i;

    bubble_sort(array, 9);

    printf("The new sorted array:\n");
    for(i = 0; i < 9; i++)
    {
        printf("%d ", array[i]);
    }
    return 0;
}
void bubble_sort(int array[], int size)
{
    int i, j, temporary_variable;
    for (i = 0; i < size; i++)
    {
        for(j= 0; j < size ; j++)
        {
            if(array[j+1] < array[j])
            {
                temporary_variable = array[j+1];
                array[j+1] = array[j];
                array[j] = temporary_variable;
            }
        }
    }
}
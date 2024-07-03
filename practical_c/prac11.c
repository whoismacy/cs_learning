#include <stdio.h>
int binary_search(int left_most, int right_most, int element);
int main()
{   

    return 0;
}
int binary_search(int array[], int left_most, int right_most, int element)
{
    if (left_most > right_most)
    {
        return "Error !"
    }
    int middle_element = left_most + right_most;
    while true:
    {
        if(array[middle_element] == element)
        {
            printf("Element found at %d", middle_element + 1);
            break;
        }
    }
}
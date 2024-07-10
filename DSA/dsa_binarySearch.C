#include <stdio.h>
#include <math.h>
#include <stdbool.h>
bool binary_search(int low, int high, int array[], int target);
bool bin_search(int array[], int size, int target);
int main ()
{
    int array[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int index_first_value = 0; 
    int index_highest_value = 9;
    int target_value = 4;
    bool found;
    int size = sizeof(array) / sizeof(array[0]);
    found = bin_search(array, size, target_value);
    if (found)
    {
        printf("Target %d found in the array.\n", target_value);
    }
    else
    {
        printf("Target %d not found in the array.\n", target_value);
    }
    return 0;
}
bool binary_search(int low, int high, int array[], int target)
{
    if (low > high)
    {
        return false;
    }
    else
    {
        int mid;
        mid = (low + high) / 2;
       
        
        if (array[mid] == target)
        {
            return true;
        }
        else if(array[mid] > target)
        {
            return binary_search(low, mid - 1, array, target);
        }
        else
        {
            return binary_search(mid + 1,  high, array, target);
        }
    }
    
}
bool bin_search(int array[], int size, int target)
{
    int middle_element;
    int low = 0;
    int high = size - 1;
    while (low <= high)
    {
        middle_element = (high + low) / 2; 

        if (array[middle_element] == target)
        {
            return true;
        }
        else if (array[middle_element] > target)
        {
            high = middle_element - 1;
        }
        else
        {
            low = middle_element + 1;
        }
    }
    return false;
}
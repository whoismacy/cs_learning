#include <stdio.h>
int main(){
    int row = 5;
    int column = 6; 
    int catmarks [row][column];

    printf("Key in the %d array elements\n", row * column);

    for(int i=0; i < row; ++i)//i++ postincrement ++i preincrement
    {
        for(int j = 0; j < column; ++j)
        {
            printf("Kindly enter an element at position( %d, %d) ", i+1, j+1);
            scanf("%d", &catmarks[i][j]);
        }
    
    }
    printf("These are the Elements keyed in: \n");
    for (int i=0; i< row; ++i)
    {
        for (int j=0; j < column; ++j)
        {
            printf("%d ", catmarks[i][j]);
        }
        printf("\n");
    }
    return 0;
}

/**void greetings()
{
    printf("Hello world\n");
}
int main()
{
    greetings();
    return 0;
}**/


/**int main() {
    int rows = 2;
    int cols = 3;
    int myArray[rows][cols];

    printf("Enter %d elements for the 2x3 array:\n", rows * cols);

    // Input loop
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            printf("Enter element at position (%d, %d): ", i + 1, j + 1);
            scanf("%d", &myArray[i][j]);
        }
    }

    // Display the array
    printf("\nYour 2x3 array:\n");
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            printf("%d ", myArray[i][j]);
        }
        printf("\n");
    }

    return 0;
}**/

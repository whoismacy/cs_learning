#include <stdio.h>
int findmax(int x, int y){
    if (x > y){
        return x;
    }
    else{
        return y;
    }
    return (x > y) ? x:y; //ternary operator // the code above has been summarised in the statement
}
int main()
{
    //ternary operator = shortcut to if/else when assigning or returning a value
    //(condition) ? value if true : value if false
    int max = findmax(9, 4);
    printf("the value is %d",max);
    return 0;
}
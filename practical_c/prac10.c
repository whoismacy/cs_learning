#include <stdio.h> //REMAINING LARGEST SMALLEST SUM AVERAGE
/**int main(){
    int catmarks[6] ={19, 20, 12, 27, 7, 10};
    printf("The fourth element is: %d\t",catmarks[3]);
    catmarks[0] = catmarks[5]*2;
    printf("%d",catmarks[0]);
    return 0;
}**/
/**int main(){
    int catmarks[6] ={19, 20, 12, 27, 7, 10};
    int largest = 0;
    int i;
    for (i=0; i<=5; i++){
        if (catmarks[i] > largest){
            largest = catmarks[i];
        }
    }
    printf("largest element: %d\n",largest);
    return 0;
}**/
/**int main(){
    int nums[5] = {20, 25, 30, 40, 50};
    int i;
    for (i=0; i<=4; i++)
    {
        printf("%d ",nums[i]);
    } 
    return 0;
}**/
/**int main(){
    int catmarks[6],i;
    printf("Key in the elements: \n");
    for (i=0; i<=5; i++)
    {
        scanf("%d\n",&catmarks[i]);
    }
    printf("%d\n",catmarks[0]);
    return 0;
}**/

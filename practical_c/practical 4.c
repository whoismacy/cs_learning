# include<stdio.h>
int main(){
    int catmarks[6],i;
    printf("Key in the array elements\n");
    for(i=0; i<=5; i++){
        scanf("%d\n", catmarks[i]);
    }
    printf("The first element is%d\n",catmarks[0]);
    return 0;
}
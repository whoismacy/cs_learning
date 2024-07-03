#include <stdio.h>
/**int main(){
    int count;
    for (count = 5; count>=1; count --){
        if (count == 3) {
            continue;
        }
    printf("%d ",count);
    }
    return 0;
}**/
/**int main(){
    int count;
    for(count = 10; count>=1; count--){
        if (count == 3){
            break;
        }
    printf("%d ", count);
    }
    return 0;
}**/
int main(){
    int count;
    for(count = 53; count>=21;  count--){
        if (count % 2 != 0){
            printf("%d ", count);
        }
    }
    printf("%d ", count);
    return 0;
}
/**int main(){
    int count;
    for(count=5; count>=1; count --)
    printf("%d\n",count);
    printf("Shoot");
    return 0;
}**/
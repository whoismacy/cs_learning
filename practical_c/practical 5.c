# include <stdio.h>
void hello(char[], int);//function prototype
int main(){
    //function prototype a function without a body before main()
    //Ensures that calls to a function are made with the correct arguments
    //A function prototype causes the compiler to flag an error if arguments are missing
    char name[] = "Shem Murimi";
    int age = 19;
    hello(name, age);
    return 0;
}
void hello(char name[], int age)
{
    printf("\n Hello %s", name);
    printf("\n You are %d years old", age);
}
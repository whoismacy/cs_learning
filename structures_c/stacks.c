#include <stdio.h>
#include <stdlib.h>

struct students
{
    int age;
    int height;
    int marks;
};
int main()
{
    struct students *student1;
    student1->age = 9;
    printf("%d", student1->age);
    return 0;
}
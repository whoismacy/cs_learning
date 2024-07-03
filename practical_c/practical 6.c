#include <stdio.h>
#include <string.h>
int main(){
    char string1[] = "Shem";
    char string2[] = "Murimi";
    strlwr(string1); //converts a string to lowercase
    srtupr(string2); //converts a string to uppercase
    strcat(string1, string2); //appends string2 to end of string1
    strncat(string1, string2, 1); //appends n chars from str1 to str2
    strcpy(string1, string2); //copys string2 to string1
    strncpy(string1, string2, 4); //copy n chars from str2 to str1
    return 0;
}
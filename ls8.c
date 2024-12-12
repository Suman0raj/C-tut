// ch -8 Strings

/*
?Defination
    A char array terminated by '\0'(null char)
    note->null char denotes the termination of string
    ex-> 
        char name[] = {'y', 'o', 'u', 'r', ' ', 'n', 'a', 'm', 'e', '\0'};
        or char name[] = "your name";
?format specifier
    -> is %s


    scanf("%s", string);
    printf("\n%s", string);

    since, scanf() can't input multi-word with spaces in a string
    therefore, we use gets() for this

?string using pointers
    char* str = "Hello world";
    store as a string

    str = "not hello";
    can be reinitilazed

    but, 
    char str[] = "Hello";
    str = "not hello" //! invalid
?Standard Library Functions
    strlen(str) -> for count number of char excluding '\0'
    strcpy(newStr(source), oldstr(destination)) -> copy
    strcat(firstStr, secStr) -> concatenate first str and second str
    strcmp(fStr, sStr) -> compares 2 string & return a value
        0-> for string equal
        +ve -> for fStr > sStr
        -ve -> for fStr < sStr

*/

#include <stdio.h>
#include <string.h>

int main(){
    char name[] = {'y', 'o', 'u', 'r', '$', '\0'};
    // char name[] = "suman";
    printf("\n%s\n", name);

    char name2[30];
    printf("\nEnter name: ");
    scanf("%s", name2);
    printf("\n%s", name2);

    // using  pointer
    char *str = "The Hindustan Times";
    printf("\n1st init : %s\n", str); //puts(str)
    str = "The Hindu";
    printf("\nre-init : %s\n", str); // puts(str)
    char str2[] = "Aaj tak";
    // str2 = "NDTV"; //! invalid
    
//strlen
    printf("\nLength of str is: %lu",strlen(str));
//strcpy
    strcpy(str2, "NDTV"); // it is generally used for array string (ex -> str2) to reinit its value
    //new
    char oldStr[] = "oldStr";
    char newStr[] = "newStr";
    printf("\nThe value of newStr is: %s", newStr);
    printf("\nThe value of oldStr is: %s", oldStr);

    strcpy(newStr/*source*/, newStr/*destination*/);
    printf("\nNow, the value of newStr is: %s", newStr); // puts(newStr)
    printf("\nNow, the value of oldStr is: %s", oldStr); // puts(oldStr)
// strcat
    char fStr[100] = "Hello"; // using char pointer is more recommended
    char sStr[] = " World";
    strcat(fStr, sStr);
    puts(fStr); // fStr becomes "Hello World";
//strcmp
    char fStr2[] = "Zero";
    char sStr2[] = "One";
    printf("\n%d", strcmp(fStr2, sStr2));// -ve value
    
}
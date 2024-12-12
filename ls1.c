// chapter1: introduction

#include <stdio.h> //  *stdio.h -> preprocessor directives

// program started from here
int main(){ 
    // printf("Hello, World");
    // *Var: - name of a memory location which stores data

    // invoking variable
    int number = 25;
    char star = '*';
    int age = 22;
    float pi = 22 / 7;
    /* 
        *Variable's rules :
            a. variable are case senstive
            b. 1st charater shoud be capital or '_'
            c. no spaces, comma
            d. no symbools used rather than '_' or numbers
    */
   int a = 30;
   int A = 40;
    int _age = 22;
    int final_price = 34;
    // changing var value
    age = 23;
    // **********************************************************************
    /* 
        *Data types
            @ int - 4
            @ float - 4
            @ char - 1
            @ long - 4
            @ double - 8
            @ long double - 10
            @ long int - 4
    */
    char hashtag = '#';
    /* 
        *Constants : value don't changes after initilization
            types: int, real constants and char constants
    */
    /*
        *Keywords
            auto     struct   break      switch    case     enum      register
            typedef  extern   return     union     static   do        default
            goto     sizeof   volatile   const     short    unsigned  while
    */
    // comments: - lines that are not part od program
        // single line : '//'
        // multi line : '/* */'
    
    // printf() function is used to print any string
    printf("kuch bhi \n") // '\n' for new line
    
    // to print integer value
    printf("age is:- %d", age);
    /*
            *format specifiers
        int :- %d
        real no:- %f
        characters :- %c
    */
    // input taking by : scanf() function
    printf("Enter your age : - ");
    scanf("%d", &age);
    printf("\nyour age is :- %d\n", age);


    int a, b;
    printf("Enter a: ");
    scanf("%d", &a);
    printf("Enter b: ");
    scanf("%d", &b);
    int sum = a + b;
    printf("The sum of a and b is : %d\n", sum);

    /*****************************************************************/
    /*
        compilation : a computer program that trandlates the program into machine code
            Hello.c  ->   C compiler  ->  Hello.out
    
    */
    
    return 0; // program finished successfully
} // funtion ended
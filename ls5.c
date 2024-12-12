// ch 5
//! Functions and recursion

/*
    Functions : block of code that perform particular task
        take arguments-> do work-> return result
        properties: 
                it can be used multiple times
                increase code resuablity
            execution always start from main
            can called directly or indirectly from main
            can be multiple functions in a programs
            functions can take value & return some value
                taking of value -> parameter
                returning of value -> return 
                passing value to a function -> passing arguments
            ex-> void printHello(); // return nothing
                 void printTable(int n); // print table of n but nothing return 
                 int sum(int a, int b); // return sum of and b
        notes:
            a. functions can return one value at a time
            b. changes in parameter in function won't change the actual var in the calling functions
            c. functions can be only called within a function
        Types: 
            1. Library functions-> special functions inbulit in C. ex-> scanf(), printf(), etc
            2. user-defined -> declared & defined by programmer
        syntax:
            prototype:  
                void printHello();
            defination:
                void printHello(){
                    printf("Hello\n");
                }
            call:
                printHello();
        D/f b/w 
            Arguments                           Parameter
            value passed in function call       values in functions declaration or defination
            used to send value                  used to receive value
            actual parameter                    formal parameter
    Recursion: 
        when a functions calls itself
        
        main calls f(x) -> f(x) calls f(x) ...

         
*/
#include <stdio.h>

void printHello(); // declaration

int sum(int, int);

void printTable(int);

void calcPrice(float);

int main(int argc, char const *argv[])
{

    int a, b;
    printHello(); // calling
    printHello();
    printHello();// can be called many times
    printf("\nEnter a and b: ");
    scanf("%d %d", &a, &b);
    int s = sum(a, b);
    printf("\nSum: %d", s);
    
    int n;
    printf("\nENter n: ");
    scanf("%d", &n);
    printTable(n); // it prints the table of n // n is arguments or actual parameter
    // for note (2) 
    float value = 100.0;
    calcPrice(value);
    printf("Actual value is : %f\n", value);

    return 0;
}


void printHello(){ // defining
    printf("Hello!");
    printf("\nMy name is: __");
}

int sum(int a, int b){
    return (a+ b);
}

void printTable(int n){ // n is parameter or formal parameter
    for(int i = 1;i<=10;i++){
        printf("\n%d * %d: %d", n, i, (n * i));
    }
}

void calcPrice(float value){
    value = value + (0.18 * value);
    printf("Value in this function is %f\n", value);
}

int fact(int n){
    if(n<=1){
        return 1;
    }
    return (n*(fact(n-1)));
}
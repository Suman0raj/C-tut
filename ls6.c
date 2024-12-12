/*
Pointers
    var that stores the memory address of another variable
    
    ?Syntax
        int age = 22;
        int *ptr = &age;
        int _age = *ptr;
            * -> known as (value at address)
            & -> known as (adress of)
        
    ?Declaring pointers
        int *ptr;
        char *ptr;
        float *ptr;

        printed address by format spedifiers -> %p
!Pointer to pointer
    a var that stores the address of other pointer
    ?Syntax:
        int **pptr;
        char **pptr;
        float **pptr;
    
    ?Pointers in function call
    1. call by value
        we pass value as arguments (or actual paramaters or copies) to a function
        
    2. Call by reference
        we pass address as arguments to a function
*/

#include <stdio.h>

void square(int);
void _square(int*);
int main(){
    int age = 22;
    int *ptr = &age; // ptr stores address of age
    int _age = *ptr; // _age is  = value at ptr

    printf("%d\n", _age);// 22
    // printing address
   
    printf("%p\n", &age);
    printf("%u\n", &age);

    printf("%p", ptr); // print memory address of ptr
    printf("%u\n", ptr);

    printf("%u\n", &ptr);

    // printing value
    printf("%d\n", age);
    printf("%d\n", *ptr);
    printf("%d\n", *(&age));

    //!Pointer to pointer

    float price = 30.0f;
    float *ptr = &price;
    float **pptr = &ptr;

    int number;

    // call by value
    square(number);
    printf("%d\n", number);

    _square(number);
    printf("%d\n", number);
}

void square(int n){
    n = n * n;
    printf("%d\n", n);
}

void _square(int *n){
    *n = (*n) * (*n);
    printf("%d\n", n);
}

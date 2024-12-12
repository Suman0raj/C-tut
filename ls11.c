// Dynamic memory allocation

/*
It is a way to allocate memory to a data structure during the runtime
*Runtime -> is time when user do I/O to console of a program
*Compiletime -> is time when compiler allocate every things for execution of the program

?Functions to handle DMA
malloc() {memory allocation}
calloc() {continous memory allocation}
realloc() {re-allocation}
free() {free the allocating memory}

?malloc()

takes number of bytes to be allocated & returns a void pointer

    syntax:
        ptr = (int *)malloc(5 * sizeof(int));

?calloc()

initilizes with 0
    syntax:
        ptr = (int*) calloc(n, sizeof(int));

?free()

used for free the memory that is taken for allocating using malloc, calloc and realloc

    syntax:
        free(ptr);

?realloc()
    reallocate (increase or decrease) memory using the same
    pointer & size
    
    syntax:
        ptr = realloc(ptr, newSize);

*/

#include <stdio.h>
#include <stdlib.h> // for DMA

int main(){
    
// sizeof()
    printf("\nSize of int is: %ld", sizeof(int));
    printf("\nSize of float is: %ld", sizeof(float));
    printf("\nSize of char is: %ld", sizeof(char));
    printf("\nSize of long is: %ld", sizeof(long));
    printf("\nSize of double is: %ld", sizeof(double));

// malloc

    int *ptr;
    ptr = (int*)malloc(5 * sizeof(int)); // ptr = NULL when system can't allocate required memory
    ptr[0] = 1;
    ptr[1] = 22;
    ptr[2] = 4;
    ptr[3] = 67;
    ptr[4] = 0;
    for(int i  =0;i<5;i++)
        printf("%d\n", ptr[i]);

    free(ptr); // for free the allocating memory

//calloc
    ptr = (int *)calloc(5 , sizeof(int));
    for (int i = 0; i < 5; i++)
        printf("%d\n", ptr[i]); // prints 0

    // free(ptr);

//free()

    free(ptr);
    ptr = (int *)calloc(2, sizeof(int));
    for (int i = 0; i < 2; i++)
        printf("%d\n", ptr[i]); // prints 0

    free(ptr);

//realloc()

    return 0;
}
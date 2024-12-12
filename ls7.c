// arrays
/*
    collections of similar data types in continous memory location
    ?Syntax
        int marks[5];
        char name[10];
        float price[2];
    ?I&O
        scanf("%d", &marks[0]);
        printf("%d", marks[0]); 
    
    ?Initalization
    int array[] = {x, y, z, ...}; //or, 
    int array[size] = {x, y, z, ...};

?Pointer arithmetic
    pointer can be incremented or decremented 
    ptr++;
    ptr--;

    pointer address decrese by the data types size of the pointer type(int, float, ..)

    subtraction and comparison b/w two same data types 
    of pointer is valid
    
    char* ptr = &a;
    char* ptr2 = &b;
    print (ptr == ptr2) // valid 
    print (ptr - ptr2) // valid


    * Array is a pointer

    int *ptr = &arr[0] or, int* ptr = arr

    ?Travaese an array
    int a[10];
    int *ptr = &aadhar[0]// or aadhar // started to pointed at 0th index
    
    ?Array as Function arguments
    void printNum(int arr[], int n);// can't mention size
or, void printNum(int *arr, int n);
    call:   printNum(arr, n);

    !Multidimensional  Arrays
    2D array
    int arr[][] = {{1, 2}, {3, 4}};
    
*/
#include <stdio.h>


void printNum(int arr[], int n); //or, 
// void printNum(int *arr, int n);

int main(){

    // lengthy and unmannered
    int marks1 = 97;
    int marks2 = 99;
    int marks3 = 100;
    
    // int marks[] = {97, 99, 100}; // right way

    int marks[3];

    printf("\nEnter marks[0]: ");
    scanf("%d", &marks[0]);

    printf("\nEnter marks[1]: ");
    scanf("%d", &marks[1]);

    printf("\nEnter marks[2]: ");
    scanf("%d", &marks[2]);

    printf("ENter... : ");
    scanf("%d", &marks[3]); //!runtime error
    
    printf("%d\t%d\t%d",marks[0],  marks[1], marks[2]);

    //?Pointer arithmetic

    int age = 10;
    int* ptr = &age;
    printf("%u\n", ptr);

    //increment
    ptr++;
    printf("%u\n", ptr);

    // decrement
    ptr--;
    printf("%u\n", ptr);


    char st = '*';
    char *ptr2 = &st;

    printf("%u\n", ptr2);

    ptr2++;
    printf("%u\n", ptr2);

    ptr--;
    printf("%u\n", ptr2);
    
    // subtraction b/w two pointer(valid)

    int Age = 22;
    int _Age = 10;

    int* Ptr = &Age;
    int* _Ptr = &_Age;
    printf("\nPtr: %u\t_Ptr: %u\n", Ptr, _Ptr);

    printf("differences: %u\n", Ptr - _Ptr);

    _Ptr = &age;
    printf("Comparison: %u\n", (Ptr == _Ptr));

    int aadhar[10];

    int *ptr = &aadhar[0];

    //?pointers and arrays are same
    // taking input of array

    for(int i = 0;i<10;i++){
        printf("\nEnter (%d)th: ", i);
        scanf("%d", (ptr + i));
    }

    //printing output

    for(int i = 0;i<10;i++){
        printf("\n%dth: %d", i, *(ptr + i));
    }

    int pArr[] = {45, 54, 63, 90, 84};
    // passing array as formal paramenter(or arguments)
    
    printNum(pArr, sizeof(pArr)/ sizeof(int));


    // 2D array

    int d2arr[2][3];
    
    d2arr[0][0] = 23;
    d2arr[0][1] = 45;
    d2arr[0][2] = 67;
    d2arr[1][0] = 87;
    d2arr[1][1] = 78;
    d2arr[1][2] = 578;

    printf("%d\n", d2arr[0][2]);
    return 0;
}

void printNum(int arr[], int n){
    for(int i = 0;i<n;i++){
        printf("%d\t", arr[i]);
    }
    printf("\n");
}
// Structures
/*
is collection of different data types
is a user defined data types
is stored in continous memory allocation
?example
    to store the student details:
        name(string)
        roll no(int)
        cgpa(float)
    to store book details:
        name(Str)
        price(float)
        author(string)
        year of publish(int)
    to store bank details
    etc
?Syntax
    struct name_of_structure{
        data
    }; // semicolon is necesssary
    in function:(to use)
        struct name_of_structure name_of_copy;
        name_of_copy.data1 = ...;
        ex>
            struct student{
                char name[100];
                int roll;
                float cgpa;
            };
            (in any function)
            struct student s1;
            s1.cgpa = 7.8;

?Array of structure
    collection of copies of n structure in continous memory
    ?Syntax
        struct student CS[100];
        struct student IT[100];
        struct student ECE[100];


        Acess by:
            IT[n].roll = 200;
            CS[n].roll = 12;

?Initializing structures

    struct student s2 = {"SHARADHA", 1664, 7.9};
    all values initilize at starting
    !assign value in same order as declare in structure

?Arrow operator
    used to access data from pointer of structure
    (->) is the operator
    example: 
        ptr->name //*[(*ptr).roll]
        ptr->roll //*[(*ptr).roll]

?Passing structure to function
    void printInfo(struct student s1);


?Typedef keyword
    used to create alias for data types
    typedef struct ComputerScienceStudents{
        int roll;
        float cgpa;
        char name[20];
    }coe;
    
    coe stu1;
*/


#include <stdio.h>
#include <string.h>

typedef struct student
{
    char name[50];
    int roll;
    float cgpa;
}stu;

typedef struct ComputerScienceStudents
{
    int roll;
    float cgpa;
    char name[20];
}coe;

void printInfo(struct student s);

int main(){
    struct student s1;
    s1.cgpa = 8.9;
    s1.roll = 45;
    // s1.name = "SHRADHA"; //!invalid
    strcpy(s1.name, "SHRADHA");

    printf("\ns1: \n\tName: %s\n\tRoll: %d\n\tCGPA: %f", s1.name, s1.roll, s1.cgpa);

// Array of structure
    struct student CS[100];
    struct student IT[100];
    struct student ECE[100];

    strcpy(CS[0].name, "SHARADHA");
    printf("\nName: %s", CS[0].name);
    
// Initializing structures

    struct student s2 = {"SHARADHA", 1664, 7.9}; 
    struct student s3 = {"Schinchen", 45, 9.9};
    struct student s4 = {0}; // automatically initilize all value to 0

// pointer to structure
    struct student s5 = {"SHARADHA", 1664, 7.9};
    printf("\nStudent roll: %d\n", s1.roll);

    struct student *ptr = &s5;
    printf("\nStudent roll no. accessed by ptr is : %d\n", (*ptr).roll/*or ptr->roll*/);
    // insert * in parenthesis

    printf("student->roll: %d\n", ptr->roll);
    printf("student->name: %s\n", ptr->name);
    printf("student->cgpa: %f\n", ptr->cgpa);

    // calling function // call by value
    printInfo(s5);
//after using typedef
    stu s2 = {
        "Schinchen",
        45,
        4.0
    }; // a good way
    coe stu1 = { "SHARADHA",
                 1664,
                 7.9 };
    
}

void printInfo(struct student s){
    printf("student's roll: %d\n", s.roll);
    printf("student's name: %s\n", s.name);
    printf("student's cgpa: %f\n", s.cgpa);
}
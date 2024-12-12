// File I/O

/*
File-> is a container in a storage device to store data

*Ram is volatile memory and hard disk is non-volatile memory

Files are used to persist the data

?Operation of files
*create
*open a file
*close a file
*read from a file
*write in a file

?Types
    text files -> .c, .txt, .java, etc
    Binary files -> .mp3, .exe, .out, .jpg

?File pointer
    FILE is a built-in structure that needs to be created for opening file

    A file ptr that points to this structure & is used to access the file

        FILE *fptr
? opening file
    FILE *fptr;
    fptr = fopen("filename.txt", mode);
?Closing a file
    fclose(fptr);
?Modes of opening file
"r" open to read             | Stores null in fptr when file not exists
"rb" open to read in binary  | Stores null in fptr when file not exists
"w" open to write            | create a file or over write in file(if exists)
"wb" open to write in binary | create a file or over write in file(if exists)
"a" open to append           | write into file at end of file
!Best practise -> Check if a file exists before reading from it
?Reading from file
char ch;
fscanf(fptr, "%c", &ch); store the char in var ch from file pointed by fptr
?writing to a file

char ch = 'A';
fprintf(fptr, "%c", ch);

?Read & write char
fgetc(fptr)// returns char value from the the file
fputc('A', fptr) // put char 'A' into the file

? EOF (End of file)
it is a marker which denotes End Of File



*/

#include <stdio.h>

int main()
{
    FILE *fptr;
    fptr = fopen("Test.txt", "r"); // fptr!=Null
    if (fptr == NULL)
    {
        printf("File not exists");
    }
    else
    {
        fclose(fptr);
    }
// creating file
    FILE *fptr2;
    fptr2 = fopen("NewTest.txt", "w"); // creates a file with the given name
    fclose(fptr2);


    fptr = fopen("Test.txt", "w"); // over write the data of Test.txt(if exists)
    fclose(fptr);
    // reading from file

    
    fptr = fopen("Test.txt", "r"); // open in reading mode

    char ch;
    fscanf(fptr, "%c", &ch); // ch = 'A'
    printf("\nThe charater is: %c\n", ch);
    fscanf(fptr, "%c", &ch); // ch = 'p'
    printf("\nThe charater is: %c\n", ch);
    fscanf(fptr, "%c", &ch); // ch = 'p'
    printf("\nThe charater is: %c\n", ch);
    fscanf(fptr, "%c", &ch); // ch = 'l'
    printf("\nThe charater is: %c\n", ch);
    fscanf(fptr, "%c", &ch); // ch = 'e'
    printf("\nThe charater is: %c\n", ch);

    // suppose Test.txt has data : 123 456 789

    int data;
    fscanf(fptr, "%d", &data); // data = 123
    printf("\nThe integer is: %d\n", data);
    fscanf(fptr, "%d", &data); // data = 456
    printf("\nThe integer is: %d\n", data);
    fscanf(fptr, "%d", &data); // data = 789
    printf("\nThe integer is: %d\n", data);

    // writing to a file
    // opening fptr in writing mode
    fptr = fopen("Test.txt", "w"); // overwrite all data in the file(if exists) or create
    fprintf(fptr, "%c", 'M');
    fprintf(fptr, "%c", 'A');
    fprintf(fptr, "%c", 'N');
    fprintf(fptr, "%c", 'G');
    fprintf(fptr, "%c", 'O');
    // Now file has data -> MANGO
    // opening in append mode
    fptr = fopen("Test.txt", "a"); // don't overwrite
    fprintf(fptr, "%c", ' ');
    fprintf(fptr, "%c", 'M');
    fprintf(fptr, "%c", 'A');
    fprintf(fptr, "%c", 'N');
    fprintf(fptr, "%c", 'G');
    fprintf(fptr, "%c", 'O');
    // Now the file content is -> MANGO MANGO
// using function to read and write
    // to read

    fptr = fopen("Test.txt", "r");
    printf("%c\n", fgetc(fptr)); // read a char from file
    printf("%c\n", fgetc(fptr));
    printf("%c\n", fgetc(fptr));
    printf("%c\n", fgetc(fptr));
    printf("%c\n", fgetc(fptr));

    // to write
    fputc('M', fptr);
    fputc('A', fptr);
    fputc('N', fptr);
    fputc('G', fptr);
    fputc('O', fptr);
// Using EOF
    fptr = fopen("Test.txt", "r");
    ch = fgetc(fptr);
    while(ch!=EOF){
        printf("%c", ch);
        ch = fgetc(fptr);
    } // read until EOF not came
    printf("\n");


    fclose(fptr);
    return 0;
}
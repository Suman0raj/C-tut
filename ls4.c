#include <stdio.h>

// ch 4
// loop control instructions
// note: loop is called iteration
/*
    to repeat some portion of the programs
    loop:
        1. for
        2. while
        3. do while
            1.
                for(initilisation;condition;updation){
                    /// do something
                }// at least run one time
            2. 
                while(condition){
                    //do someting
                    updation
                }// only run when condition is true
            3.
                do{
                    // do something
                }while(condition);// run at least one  

*/

int main()
{
    // to print 'hello world' for 5lines
    ///!for loop
    /*
    for(int i = 1; i<=5;i= i+1){
        // printf("Hello world\n");
        pritnf("%d\n", i);
    }
    */
    for (int i = 10; i > 0; i = i - 1)// i is counter var
    {
        printf("%d\n", i);
    }
    ///! increment operator
    // i++(post-increment->use then increase), ++i(pre-increment->increase then use)
    /*
    int i = 1;
    // printf("%d \n", i++); // 1
    printf("%d \n", ++i); // 2*/
/*
    /// !decrement operator
    // --i(pre-decrement-> decrease, then use), i--(post-decrement-> use then decrease)
    int i = 1;
    printf("%d \n", i--); // 0
    printf("%d \n", --i);*/
    /*
    ///! loop counter
    //float
    for(float i=1.0;i<=5.0;i++){
        printf("%f\n", i);
    }

    //char
    for(char c='a';c<='z';c++){
        printf("%c\n", c);
    }*/

/*
    ///! infinite loop
    // condition is left or set to never occured
    for(int i = 0;;i++){
        printf("%d\n", i);
    }*/
   /*
    // while loop
    int i = 0;
    while(i<5){
        printf("%d\n", i);
        i++;
    }*/
    
    /*
    // do while

    int i = 0;
    do
    {
        printf("%d\n", i);
        i++;
    } while (i<=5);
    */
    /*
    ///! break statement
    // for exit the loop
    for(int i = 1; i<= 5;i++){
        if(i==3){
            printf("\nExiting the loop\n");
            break;
        }
        printf("%d\n", i);
    }
    printf("end"); */
    //! continue
    for (int i = 0; i <= 5; i++)
    {
        if(i==3){
            printf("Continue ..\n");
            continue;
        }
        printf("%d\n", i);
    }
    
    
    return 0;
}
// Ch 3
// Conditionals operators
/*
    1. if-else      2. switch


    1.
        i)
            if(condition){  // if false
                    work
            }else{  // it executes
                work
            }
        ii)
            if (condition 1){ // if false
                work
            }
            else if(condition 2){ // it executes
                work
            }
            else if()...
        iii)
            Nested if
                if(condition){
                    if(condition i){
                        /// code
                    }
                    else{
                        ///code
                    }
                }
                else{
                    ///code
                }

        iv)Ternary operators
            condition ? do Something if condition is true:do something if condition is false;
            (5 > 6)?printf("5 is great") : printf("6 is great"); (no semi-colon at middle)
    2.
        switch(expression or var){
            case C1: // C1 should be constant not var
                /// do something
                break; // break is important for break the switch nor it move on next case
            case C2:
                /// do something
                break;
            default:
                /// do something if no cases meet
                break; // (optional)
        }
            properties
                a. cases can be in any order
                b. nested switch is allowed

                Nested switch

                    switch(ex){
                        case 1:
                            switch(ex i){
                                case a:
                                    /// code;
                                    break;
                                default: 
                                    ///code
                                    break;
                            }
                            break;
                        case 2:
                            break;
                        dafault:
                            ///code
                            break;
                    }
*/

#include <stdio.h>

int main()
{
    /*
    int age;
    printf("Enter age: ");
    scanf("%d", &age);

    if (age > 18) // multiple statements
    {
        printf("Adult\n");
        printf("eligible for vote\n");
        printf("Can drive\n");
    }
    else
    {
        printf("not adult \n");
    }
    printf("Thank you");*/
    /*
        int age;
        printf("Enter age: ");
        scanf("%d", &age);

        if (age > 18) // single statements
            printf("Adult\n");
        else
            printf("not adult \n");
        printf("Thank you");

        */
    /*
    int age;
    printf("Enter age: ");
    scanf("%d", &age);

    if (age >= 18)
    {
        printf("Adult\n");
    }
    else if (age > 13 && age < 18)
    {
        printf("\nTeenagers\n");
    }
    else
    {
        printf("not adult or child\n");
    }*/

    /*
        ternary op


        int age;
        printf("Enter age: ");
        scanf("%d", &age);
        (age > 18)? printf("Can vote\n"):pritnf("Can't vote");
    */

   /*
        switch(expression or var){
            case C1: // C1 should be constant not var
                /// do something
                break; // break is important for break the switch nor it move on next case
            case C2:
                /// do something
                break; 
            default:
                /// do something if no cases meet
                break; // (optional)
        }
   */
    /*
    int day;
    printf("Enter day: ");
    scanf("%d", &day);
    switch (day)
    {
    case 1:
        printf("Monday");
        break;

    case 2:
        printf("Tues");
        break;
    case 3:
        printf("Wed");
        break;
    case 4:
        printf("Thur");
        break;
    case 5:
        printf("Fri");
        break;
    case 6:
        printf("Sat");
        break;
    case 7:
        printf("Sun");
        break;

    default:
        printf("Not a valid day");
        break;
    }
    */

    // Nested if
      
/*
    int num;
    printf("Enter num: ");
    scanf("%d", &num);

    if(num >= 0){
        printf("natural no\n");
        if(num % 2 == 0){
            printf("even\n");
        }else{
            printf("Odd\n");
        }
    }else{
        printf("not a natural no.\n");
    }*/
}
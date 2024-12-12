// chapter 2: Instructions & Operators

/*
    instructions:
        These are the statements in a program
        types:
                1. type declaration instructions
                2. arithimic instructions
                3. control instructions
    1. Type declaration:
        declare var before using it
    2. Arithimic instructions
        a + b : - here a is operand 1, '+' is operator, 'b' is operand 2
        Type conversion
            int     vs      int         -> int
            int     vs      float       -> flaot
            float   vs      float       -> float
         two types of conversion
            1. implicit(by compiler done it by self)     2. explicit(programers do it manually)

            Operator precedence
                *, /, %
                +, -
                =
            Associativity (for same precedence)
                left to right
                    ex:- 3 * 5 / 1 % 4 // ans = 3
                        first *, second /, third %

    3. Control instructions (use for flow of programs)
        a. sequence coontrol // one by one
        b. decision control // if-else
        c. loop control // doing a lot of task
        d. case control // if-else

        false- 0
        true = 1

        Operators 
            a. arithimic : =, -, *, /, %
            b. relational : >, <, <=, >=, ==, != 
            c. logical: &&(and), ||(or), !(not)
            d. bitwise: ^, &, |
            e. assignment: =, +=, -=, *=, /=, %= 
            f. ternary: ?:

            operator preccedence
                !
                *, /, %
                +, -
                <, <=, >, >=
                ==, != 
                &&
                ||
                =
*/

#include <stdio.h>
#include <math.h>

int main(){
    // valid statements
    int a = 22;
    int b =  a;
    int c = b * 6;
    int d = 1, e;
    e = 3;
    int oldAge = 22;
    int years = 1;
    int newAge = oldAge + years;
    // invalid statements
        // int x = y = z = 4;
    // single variable on on the LHS
    int x = 67; 
    a = b + c;
    a = b * c;
    a = b / c;
    // invalid
    /*
        b + c = a
        a = bc
        a = b^c
    */
    a = pow(b, c);
    /*
        modular operator % (only works for integers)
            3 % 2 =1
            4 % 2 = 0
            -3 % 2 = -1
    */
    printf("\nModulor operator : %d\n", 67 % 4);
    // type  conversion
    printf("type: %d \n", 4 / 3);
    printf("type: %f \n", 4 / 3);
    printf("type: %d \n", 4.0 / 3.0);
    printf("type: %d \n", 2 / 3);
    printf("type: %f \n", 2 / 3);
    // studied till 1:17:46
    // precedence
    x = 4 + 9 * 10; // 94
    int y = 8 / 6 % 2; // associativity form left to right

}
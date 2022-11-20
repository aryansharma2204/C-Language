//Operators and Precedence in C

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int a, b, x, y, z, p, q;

    a = 36;
    b = 6;
    x = 0;
    z = 47;
    y = 0;
    p = 2;
    q = 3;

    printf("a + b = %d\n", a + b);
    printf("a - b = %d\n", a - b);
    printf("a * b = %d\n", a * b);
    printf("a / b = %d\n", a / b);
    printf("a % b = %d\n", a % b);

    printf("\n");

//Logical Operators
    printf("a && b = %d\n", a && b); //Output will be 1 because its true, as it a int value.
    printf("a && b = %d\n", x && z); //Output will be 0 because it is false, as 0 is not a int value.
    printf("a || b = %d\n", a || b); //It will return 1 as both value are true.
    printf("a || b = %d\n", x || z); //It will return 1 as one value is true.
    printf("a || b = %d\n", x || y); //It will return 0 as no value is true.
    printf("!x = %d\n", !x); //NOT of x = 1.
    printf("!a = %d\n", !a); //NOT of a = 0(FALSE) because its truth value is 1(TRUE).

    printf("\n");

//Bitwise Operators
    printf("p & q = %d\n", p & q); //p & q = 2




    return 0;
}

/*
So What is an Operator
● An Operator is a symbol used to perform operations in given programming language
● In this tutorial series, we will look into operators used in the C programming lanuage

It do operation between operands for ex: 3 + 4 = 7, here + is a operator and 3,4 are the operands

► Types of Operators in C Language 
● Arithmetic Operators
● Relational Operators
● Logical Operators
● Bitwise Operators
● Assignment Operators

❖ Arithmetic Operators:-
+----------+----------------+
| Operator |  Description   |
+----------+----------------+
|     +    | Addition       |
|     -    | Subtraction    |
|     *    | Multiplication |
|     /    | Division       |
|     %    | Modulus        |
+----------+----------------+

If in between a integer and a floating point we are using arithmetic operators the the floating point result will come

❖ Relational Operators:-
+----------+--------------------------+
| Operator |        Description       |
+----------+--------------------------+
|     ==   | Is equal to              | to check whether two values are equal or not, it will be used in if statement 
|     !=   | Is not equal to          |
|     >    | Greater than             |
|     <    | Less than                |
|     >=   | Greater than or equal to |
|     <=   | Less than or equal to    |
+----------+--------------------------+

❖ Logical Operators:-
+----------+--------------------------------------------------------------------------------------------------------------------------------------------------+-------------------+
| Operator |                                                         Description                                                                              |      Example      |
+----------+--------------------------------------------------------------------------------------------------------------------------------------------------+-------------------+
|    &&    | Logical AND Operator. If both the operands are non-zero, then the condition is true.                                                             | (A && B) is false.|
|    ||    | Logical OR Operator. If any of these two operands is non-zero, then condition becomes true.                                                      | (A || B) is true. |
|    !     | Logical NOT Operator. It is used to reverse the logical state of its operand. If condition is true, then Logical NOT operator will make it false.| !(A && B) is true.|
+----------+--------------------------------------------------------------------------------------------------------------------------------------------------+-------------------+

Logic of && is that if both the values are true then only it will give true
Logic of || is that if any one value is true then it will give true
Logic of ! id that it reverses the value like true will become false and similarly false will become true



❖ Bitwise Operators:- First they convert number into bit and then do operations on it.
+-----+-----+-------+-------+-------+
|  a  |  b  | a & b |  a|b  | a ^ b |       Bitwise Operators works on bits.
+-----+-----+-------+-------+-------+
|  0  |  0  |   0   |   0   |   0   |
|  0  |  1  |   0   |   1   |   1   | 
|  1  |  1  |   1   |   1   |   0   |
|  1  |  0  |   0   |   1   |   1   |
+-----+-----+-------+-------+-------+

XOR operator exclusive or operator (a ^ b) means it want one correct value but one incorrect value also.

For Ex: 2 & 3
        in binary
        0 -> 00
        1 -> 01
        2 -> 10
        3 -> 11

        10 & 11 = 10
        because 1 & 1 = 1, 0 & 1 = 0
        and this 10 = 2 int binary


► Other Bitwise Operator:
● ~ is the binary one's complement operator
● << is the binary left shift operator
● >> is the binary right shift operator


❖ Assignment Operators:-
+-------------+-----------------------------------------------------------------------------------------------------------------------------------------+
|   Operator  |                                                         Description                                                                     |
+-------------+-----------------------------------------------------------------------------------------------------------------------------------------+
|      =      | Simple assignment operator. Assigns values from right side operands to left side operand.                                               |
|      +=     | Add AND assignment operator. It adds the right operand to the left operand and assign the result to the left operand.                   |
|      -=     | Subtract AND assignment operator. It subtracts the right operand from the left operand and the result is assigned to the left operand.  |
|      *=     | Multiply AND assignment operator. It multiplies the right operand with the left operand and the result is assigned to the left operand. |
|      /=     | Divide AND assignment operator. It divides the left operand with the right operand and the result is assigned to the left operand.      |
+-------------+-----------------------------------------------------------------------------------------------------------------------------------------+


❖ Miscellaneous Operators:-
+-----------+-----------------------------------+-----------------------------------------------------------------------------+
|  Operator |            Description            |                               Example                                       |
+-----------+-----------------------------------+-----------------------------------------------------------------------------+
| sizeof()  | Returns the size of a variable    | sizeof(a); where a is integer, will return int's size on that architecture. | How much space on that machine is this int taking will be the output
|    &      | Returns the address of a variable | &a; returns the actual address of the variable                              |
|    *      | Pointer to a variable             | *a;                                                                         |
|    ?:     | Conditional Expression            | If Condition is true? then value X : otherwise value Y                      |
+-----------+-----------------------------------+-----------------------------------------------------------------------------+




► Operators Precedence in C:-
+-------------------------------------------------------------------+
|     Category   |              Operator            | Associativity |
+----------------+----------------------------------+---------------+
| Postfix        | () [] -> . ++ - -                | Left to Right |           |
| Unary          | + - ! ~ ++ - - (type)* & sizeof  | Right to Left |           |
| Multiplicative | * / %                            | Left to Right |           |
| Additive       | + -                              | Left to Right |           |
| Shift          | << >>                            | Left to Right |           |   
| Relational     | < <= > >=                        | Left to Right |           |
| Equality       | == !=                            | Left to Right |           |
| Bitwise AND    | &                                | Left to Right |           |
| Bitwise XOR    | ^                                | Left to Right |           |
| Bitwise OR     | |                                | Left to Right |           |
| Logical AND    | &&                               | Left to Right |           |
| Logical OR     | ||                               | Left to Right |           |
| Conditional    | ?:                               | Right to Left |           |
| Assignment     | = += -= *= /= %=>>= <<= &= ^= |= | Right to Left |           |
| Comma          | ,                                | Left to Right |           ▼
+----------------+----------------------------------+---------------+
--------------------------------------------------------------------►
● Associativity: In programming languages, the associativity of an operator is a property that determines how operators of the same precedence are grouped in the absence of parenthesis.





*/
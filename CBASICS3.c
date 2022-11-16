/*
BASIC SYNTAX OF C PROGRAM
Now we will look at the building blocks of this code
*/

#include <stdio.h>

int main(int argc, char const *argv[]) //int- keyword
{
    int a;
    printf(         "Hello World\n"         ); // Hello World is a String Literal that means it is a string. You can give any number of spaces.

    scanf("%d", &a); // &(ampersand) is a symbol

    return 0; // return- keyword, 0 is a constant here. 
}

/*
C Program is made up of:
1) Constants        \
2) Identifiers      |              identifiers are name of variable/function so that we can identify them. !@#$(punctuation characters) etc are not allowed as identifiers
3) String Literals  |---------> These are tokens(There should be a space between tokens)
4) Keywords         |              keywords are reserved(we can't make constant, identifier, variable of it) words in C-Programming Language(32 general purpose keyword)
5) Symbols          /
*/
/*
C Program is made up of individual tokens:
and token means the parts/building blocks that make a C-Program
For Example: Program for Hello World in tokens will look like

#include <stdio.h>
int main()
{
    printf
    (
     "Hello World\n"
    );
    return 0;
}

To make this representation good we skip the new line and write the program in compact form
*/
/*
Termination of every statement in C-Program should be with semi-colon(;)
*/

/*
C is a case sensitive programming language For Example:
#include <stdio.h>

int main(int argc, char const *argv[])
{
    printf("Hello World\n");\
                             ---------> THESE ARE DIFFERENT VARIABLES
    printf("hello World\n");/
    return 0; 
}
*/ 

/*
32 reserved keyword:
________________________________________
auto     | double  | int      | struct
break    | else    | long     | switch
case     | enum    | register | typedef
char     | extern  | return   | union
const    | float   | short    | unsigned
continue | for     | signed   | void
default  | goto    | sizeof   | volatile
do       | if      | static   | while
________________________________________
*/

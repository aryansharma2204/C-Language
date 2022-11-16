// Variables and Data Types

/*
Guys think about a container, in that container you can fill till its capacity.
Similarly, Variable is also a container where we will store data in memory.
I will givs you one glass and one lunch box, what will you do, you will fill water in the glass and food in lunch box, 
Similarly variables in C has its data type.
Data Type tells us what type of variable is going in this container
Variable is a name that we give to storage area that we want to store something in this, like in int we will store integer, in char we will store a characte etc
*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
    printf("%lu", sizeof(int)); //%lu is used for unsigned long
    return 0;
}

/*
--------------------------------------------------------------------------------------------------------------------------
Preprocessing ---> Compilation ---> Assembly ---> Linking ---> Loading
                                                                  |
                                                                  |
                                                                  |
                                                                  ▼
                                                Then the program loads in RAM(memory)





Program is load in memory it means that program is loaded in RAM not hardisk.

--------------------------------------------------------------------------------------------------------------------------
What is a Variable?
● A name given to a memory location
● Declared by writing type variable_name;  for ex: int a, b, c, d;
● Initialized and declared by type variable_name = value; for ex: int a = 4;



_________
| | | | | --\
| | | | |    -----> If this is a RAM, then imagine these 12 memory blocks
| | | | | --/       and in the basic unit of this memory block there can be stored a 0 or 1
_________           So what will happen is that name given to one memory location i.e. our variable.




►Rules for Defining a Variable in C:
● Can contain alphabets, digits, and underscore(_)
● A variable name can start with an alphabet and underscore only.
● Can't start with a digit
● No whitespace and reserved keywords is allowed
● Valid variable names: int aryan, float aryan123, char _aryan34
● Invalid variable names: $aryan, int 77aryan, char long;

--------------------------------------------------------------------------------------------------------------------------
Data Types in C:
● Basic Data Type: int, char, float, double 
● Derived Data Type: array, pointer, structure, union, we use basic data types to make these
● Enumeration Data Type: emum
● Void Data Type: void, void means empty in C

►Data Type: Size(32-BIT ARCHITECTURE)

❖ DATA TYPES        |❖ Memory Size |❖ Range 
--------------------|--------------|--------------------------
char                | 1 byte       | -128 to 127                    //1 byte = 8 bits and in 1 bit a 0 or 1 can be stored
signed char         | 1 byte       | -128 to 127
unsigned char       | 1 byte       | 0 to 255
short               | 2 byte       | -32768 to 32767
signed short        | 2 byte       | -32768 to 32767
unsigned short      | 2 byte       | 0 to 65535
int                 | 2 byte       | -32768 to 32767
signed int          | 2 byte       | -32768 to 32767
unsigned int        | 2 byte       | 0 to 65535
short int           | 2 byte       | -32768 to 32767
signed short int    | 2 byte       | -32768 to 32767
unsigned short int  | 2 byte       | 0 to 65535
long int            | 4 byte       | -2147483648 to 2147483647
signed long int     | 4 byte       | -2147483648 to 2147483647
unsigned long int   | 4 byte       | 0 to 4294967295
float               | 4 byte       |
double              | 8 byte       |
long double         | 10 byte      |

►Imagine you have a 4gb ram pc
so it has 4 * 1024 mb
or 4 * 1024 * 1024 kb
or 4 * 1024 * 1024 * 1024 bytes
or 4 * 1024 * 1024 * 1024 * 8 bits


char c = 'c'; //single quotes denote that it is a character

--------------------------------------------------------------------------------------------------------------------------
BASIC OPERATORS AND FUNCTIONS:

● +
● -
● *
● /
-------------
● printf();
● scanf();
*/
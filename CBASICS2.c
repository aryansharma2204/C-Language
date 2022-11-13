#include <stdio.h> //preprocessor statement
int main(int argc, char const *argv[]) //main function, execution of program starts from here
{
    int a,b; //I have defined two integers
    printf("Enter number a\n"); // \n is a new line character
    scanf("%d", &a); //function in stdio.h, which helps us to take a value from the user, &(ampersand) is address of operator

    printf("Enter number b\n");
    scanf("%d", &b);

    printf("The sum is %d\n", a+b);

    return 0; //0 and int should match. By returning 0 we mean that our program is succssful
}
//If you don't want a.out, then you can use gcc CBASICS2.c -o NAME, here the name is aryan
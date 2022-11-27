#include<stdio.h>
/*
Print a multiplication table of a number entered by the user in preety form
Example: 
Enter the number you want multiplication table of:
6
Output:
Table of 6:
6 X 1 = 6
6 X 2 = 12
.
.
.
.
6 X 10 = 60
*/
int main(int argc, char const *argv[]) //int argc, char const *argv[], These are command line arguments
{
    int num, num2;
    printf("Enter a Number: ");
    scanf("%d", &num);
    printf("%d X 1 = %d\n", num, num * 1 );
    printf("%d X 2 = %d\n", num, num * 2 );
    printf("%d X 3 = %d\n", num, num * 3 );
    printf("%d X 4 = %d\n", num, num * 4 );
    printf("%d X 5 = %d\n", num, num * 5 );
    printf("%d X 6 = %d\n", num, num * 6 );
    printf("%d X 7 = %d\n", num, num * 7 );
    printf("%d X 8 = %d\n", num, num * 8 );
    printf("%d X 9 = %d\n", num, num * 9 );
    printf("%d X 10 = %d\n", num, num * 10 );
    return 0;
}

C - Preprocessor
TASKS
0. Object-like Macro
•	Create a header file that defines a macro named SIZE as an abbreviation for the token 1024.
1. Pi
•	Create a header file that defines a macro named PI as an abbreviation for the token 3.14159265359.
2. File name
•	Write a program that prints the name of the file it was compiled from, followed by a new line.
•	You are allowed to use the standard library
3. Function-like macro
•	Write a function-like macro ABS(x) that computes the absolute value of a number x.
4. SUM
•	Write a function-like macro SUM(x, y) that computes the sum of the numbers x and y.
======================================
TASK0


Create a header file that defines a macro named SIZE as an abbreviation for the token 1024.




julien@ubuntu:~/0x0c. macro, structures$ cat 0-main.c
#include "0-object_like_macro.h"
#include "0-object_like_macro.h"
#include <stdio.h>


/**
* main - check the code
*
* Return: Always 0.
*/
int main(void)
{
   int s;


   s = 98 + SIZE;
   printf("%d\n", s);
   return (0);
}
julien@ubuntu:~/0x0c. macro, structures$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 0-main.c -o a
julien@ubuntu:~/0x0c. macro, structures$ ./a
1122
julien@ubuntu:~/0x0c. macro, structures$


Repo:


GitHub repository: alx-low_level_programming
Directory: 0x0D-preprocessor
File: 0-object_like_macro.h


vi 0-object_like_macro.h
#ifndef OBJECT_LIKE_MACRO_H
#define OBJECT_LIKE_MACRO_H
#define SIZE 1024
#endif


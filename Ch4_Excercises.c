////////////////////////////////////////////////////
/* ch 4  Ex 2 */

/*Write a program to generate and display a table of n and n2, for integer
values of n ranging from 1 to 10. Be certain to print appropriate column
headings*/
#include<stdio.h>

int main()
{
    for (int n = 1; n <=10 ; ++n)
    {
        printf( "%2i %i \n", n, n*n ) ;
    }


 return 0;
}
////////////////////////////////////////////////////

/* ch 4  Ex 3 */

/* . A triangular number can also be generated by the formula
triangularNumber = n (n + 1) / 2
for any integer value of n. For example, the 10th triangular number, 55,
can be generated by substituting 10 as the value for n in the preceding
formula. Write a program that generates a table of triangular numbers
using the preceding formula. Have the program generate every fifth
triangular number between 5 and 50 (that is, 5, 10, 15, ..., 50).*/


#include <stdio.h>
#include <stdlib.h>

int main()
{
    for (int i = 5 ; i<= 50 ; i=i+5)
         printf( " integer value of intiger %2i triangularNumber %i \n", i, i *(i + 1) / 2 ) ;
    return 0;
}


////////////////////////////////////////////////////

/* ch 4  Ex 4 */


/* 4. The factorial of an integer n, written n!, is the product of the consecutive
integers 1 through n. For example, 5 factorial is calculated as
5! = 5 x 4 x 3 x 2 x 1 = 120
Write a program to generate and print a table of the first 10 factorials.*/

#include <stdio.h>
#include <stdlib.h>

int main()
{   int f =1 ;

    for (int i =1 ; i<=10 ; i=i+1)
    {
      f = f*i ;
      printf("The intiger %2i its factorial %i \n", i, f );
    }



    return 0;
}




////////////////////////////////////////////////////

/* ch 4  Ex 5 */
/*5. The following perfectly valid C program was written without much
attention paid to its format. As you will observe, the program is not very
readable. (And believe it or not, it is even possible to make this program
significantly more unreadable!) Using the programs presented in this
chapter as examples, reformat the program so that it is more readable.
Then type the program into the computer and run it*/

// old 
#include <stdio.h>
int main(void){
int n,two_to_the_n;
printf("TABLE OF POWERS OF TWO\n\n");
printf(" n 2 to the n\n");
printf("--- ---------------\n");
two_to_the_n=1;
for(n=0;n<=10;++n){
printf("%2i %i\n",n,two_to_the_n);
two_to_the_n*=2;}
return 0;}

// new
#include <stdio.h>
int main(void){
int n,n_2;
printf("TABLE OF POWERS OF TWO\n\n");
printf(" n 2 to the n\n");
printf("--- ---------------\n");
n_2=1;
for(n=0;n<=10;++n){

printf("%2i %i\n",n,n_2);

n_2= n_2*2;}
return 0;}

////////////////////////////////////////////////////
/* ch 4  Ex 6 */
//output
// The 200th triangular number is 20100
//program 4.2 
/* Program to calculate the 200th triangular number
Introduction of the for statement */
#include <stdio.h>
int main (void)
{
int n, triangularNumber;
triangularNumber = 0;
for ( n = 1; n <= 200; n = n + 1 )
triangularNumber = triangularNumber + n;
printf ("The 200th triangular number is %i\n",
triangularNumber);
return 0;
}
// modified
/* Program to calculate the 200th triangular number
Introduction of the for statement */
#include <stdio.h>
int main (void)
{
int n, triangularNumber;
triangularNumber = 0;
for ( n = 1; n <= 200; n = n + 1 )
triangularNumber = triangularNumber + n;
printf ("%-2i %i\n", n, triangularNumber);

return 0;
}




// output 201 20100
////////////////////////////////////////////////////

////////////////////////////////////////////////////
/* ch 4  Ex 7 */
/*A decimal point before the field width specification in a printf()
statement has a special purpose. Try to determine its purpose by typing in
and running the following program. Experiment by typing in different
values each time you are prompted.*/

#include <stdio.h>
int main (void)
{
int dollars, cents, count;
for ( count = 1; count <= 10; ++count ) {
printf ("Enter dollars: ");
scanf ("%i", &dollars);
printf ("Enter cents: ");
scanf ("%i", &cents);
printf ("$%i.%.2i\n\n", dollars, cents);
}
return 0;
}

////////////////////////////////////////////////////
/* ch 4  Ex 8 */
/*  Program 4.5 allows the user to type in only five different numbers.
Modify that program so that the user can type in the number of triangular
numbers to be calculated.*/
// Program 4.5
/*#include <stdio.h>
int main (void)
{
int n, number, triangularNumber, counter;
for ( counter = 1; counter <= 5; ++counter ) {
printf ("What triangular number do you want? ");
scanf ("%i", &number);
triangularNumber = 0;
for ( n = 1; n <= number; ++n )
triangularNumber += n;
printf ("Triangular number %i is %i\n\n", number,
triangularNumber);
}
return 0;
}*/

#include <stdio.h>
#include <stdlib.h>

int main()
{

int n, number, triangularNumber, counter, n_counter;
printf ("how many triangular number do you want? ");
scanf ("%i", &n_counter);
for ( counter = 1; counter <= n_counter; ++counter ) {
printf ("What triangular number do you want? ");
scanf ("%i", &number);
triangularNumber = 0;
for ( n = 1; n <= number; ++n )
triangularNumber += n;
printf ("Triangular number %i is %i\n\n", number,
triangularNumber);
}


return 0;
}

////////////////////////////////////////////////////
/* ch 4  Ex 9 */
 /* Rewrite Programs 4.2 through 4.5, replacing all uses of the for statement
with equivalent while statements. Run each program to verify that both
versions are identical*/

// 4.2 
/* Program to calculate the 200th triangular number
Introduction of the for statement */
#include <stdio.h>
int main (void)
{
int n, triangularNumber;
triangularNumber = 0;
for ( n = 1; n <= 200; n = n + 1 )
triangularNumber = triangularNumber + n;
printf ("The 200th triangular number is %i\n",
triangularNumber);
return 0;
}
// 4.2 _ Modified 
#include <stdio.h>
int main (void)
{
int n, triangularNumber;
triangularNumber = 0;
n = 1;
while (  n <= 200 )
    {
      triangularNumber = triangularNumber + n;
      n = n + 1 ;
    }

printf ("The 200th triangular number is %i\n",
triangularNumber);
return 0;
}

//4.3 
// Program to generate a table of triangular numbers
#include <stdio.h>
int main (void)
{
int n, triangularNumber;
printf ("TABLE OF TRIANGULAR NUMBERS\n\n");
printf (" n Sum from 1 to n\n");
printf ("--- ---------------\n");
triangularNumber = 0;
for ( n = 1; n <= 10; ++n ) {
triangularNumber += n;
printf (" %i %i\n", n,
triangularNumber);
} r
eturn 0;
}

//4.3 _modeified
#include <stdio.h>
int main (void)
{
int n, triangularNumber;
printf ("TABLE OF TRIANGULAR NUMBERS\n\n");
printf (" n Sum from 1 to n\n");
printf ("--- ---------------\n");
triangularNumber = 0;
n = 1;
while (  n <= 10 ) {
triangularNumber += n;
printf (" %i %i\n", n, triangularNumber);
n = n+1 ;
}
return 0;
}

// 4.4
#include <stdio.h>
int main (void)
{
int n, number, triangularNumber;
printf ("What triangular number do you want? ");
scanf ("%i", &number);
triangularNumber = 0;
for ( n = 1; n <= number; ++n )
triangularNumber += n;
printf ("Triangular number %i is %i\n", number,
triangularNumber);
return 0;
}

// 4.4_modified
#include <stdio.h>
int main (void)
{
int n, number, triangularNumber;
printf ("What triangular number do you want? ");
scanf ("%i", &number);
triangularNumber = 0;
n = 1;
while  (  n <= number ){

    triangularNumber += n;
    n=n+1 ;
}

printf ("Triangular number %i is %i\n", number,
triangularNumber);
return 0;
}

// 4.5

#include <stdio.h>
int main (void)
{
int n, number, triangularNumber, counter;
for ( counter = 1; counter <= 5; ++counter ) {
printf ("What triangular number do you want? ");
scanf ("%i", &number);
triangularNumber = 0;
for ( n = 1; n <= number; ++n )
triangularNumber += n;
printf ("Triangular number %i is %i\n\n", number,
triangularNumber);
} 
return 0;
}

// 4.5_modified

#include <stdio.h>
int main (void)
{
int n, number, triangularNumber, counter;
counter = 1;

while (  counter <= 5  ) {
printf ("What triangular number do you want? ");
scanf ("%i", &number);
triangularNumber = 0;

n = 1;
while (  n <= number  )
{
 triangularNumber += n;
 n = n+1 ;
}

printf ("Triangular number %i is %i\n\n", number, triangularNumber);

counter = counter +1 ;
}
return 0;
}

////////////////////////////////////////////////////
/* ch 4  Ex 10 */
/* 10. What would happen if you typed a negative number into Program 4.8? Try
it and see.*/
// P 4.8

// Program to reverse the digits of a number
#include <stdio.h>
int main (void)
{
int number, right_digit;
printf ("Enter your number.\n");
scanf ("%i", &number);
while ( number != 0 ) {
right_digit = number % 10;
printf ("%i", right_digit);
number = number / 10;
}
printf ("\n");
return 0;
}
// input -1234
// output  -4-3-2-1

////////////////////////////////////////////////////
/* ch 4  Ex 11 */

/* 11. Write a program that calculates the sum of the digits of an integer. For
example, the sum of the digits of the number 2155 is 2 + 1 + 5 + 5 or 13.
The program should accept any arbitrary integer typed in by the user. */

#include <stdio.h>
int main (void)
{
int number, right_digit, sum;
sum = 0;
printf ("Enter your number.\n");
scanf ("%i", &number);
while ( number != 0 ) {
right_digit = number % 10;
sum += right_digit;
number = number / 10;
}
printf ("The sum is %i\n", sum);
return 0;
}
















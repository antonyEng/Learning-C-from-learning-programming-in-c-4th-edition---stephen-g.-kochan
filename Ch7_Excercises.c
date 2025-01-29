////////////////////////////////////////////////////
/* ch 7  Ex 2 */
/*2. Modify Program 7.4 so the value of triangularNumber is returned
by the function. Then go back to Program 4.5 and change that program so
that it calls the new version of the  calculateTriangularNumber() function*/
// Program 7.4
// Function to calculate the nth triangular number
#include <stdio.h>
void calculateTriangularNumber (int n)
{
int i, triangularNumber = 0;
for ( i = 1; i <= n; ++i )
triangularNumber += i;
printf ("Triangular number %i is %i\n", n,triangularNumber);
}
int main (void)
{
calculateTriangularNumber (10);
calculateTriangularNumber (20);
calculateTriangularNumber (50);
return 0;
}
// Program 4.5 Using Nested for Loops

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
printf ("Triangular number %i is %i\n\n", number, triangularNumber);
} 
return 0;
}
////////////////////////////////////////////////////
int calculateTriangularNumber (int n) ;

int main (void)
{
int  number,  counter;
for (  counter = 1; counter <= 5; ++counter )
    {
printf ("What triangular number do you want? ");
scanf ("%i", &number);
printf ("Triangular number %i is %i\n\n", number,  calculateTriangularNumber (number) );
}
return 0;
}
int calculateTriangularNumber (int n)
{
int i, triangularNumber = 0;
for ( i = 1; i <= n; ++i )
triangularNumber += i;
return triangularNumber ;
}
///////////////////////////////////////////////////
//////////////////////////////////////////////////

/* ch 7  Ex 3 */
/*3. Modify Program 7.8 so that the value of epsilon is passed as an
argument to the function. Try experimenting with different values of
epsilon to see the effect that it has on the value of the square root.*/
//Program 7.8 
// Function to calculate the absolute value of a number
#include <stdio.h>
float absoluteValue (float x) ;
float squareRoot (float x , float ep) ;
float absoluteValue (float x)
{
if ( x < 0 )
x = -x;
return (x);
}
// Function to compute the square root of a number
float squareRoot (float x, float ep)
{

float guess = 1.0;
while ( absoluteValue (guess * guess - x) >= ep )
guess = ( x / guess + guess ) / 2.0;
return guess;
}
int main (void)
{
float ep ;
printf ("what is the epsilon u want use \n");
scanf("%f", &ep);
float low_epsilon = 1e-5 ;
printf ("squareRoot (2.0) = %f\n", squareRoot (2.0, ep));
printf ("Error with respect to %e = %f\n", low_epsilon,absoluteValue ( squareRoot (2.0, ep)- squareRoot (2.0, low_epsilon) ) );

printf ("squareRoot (144.0) = %f\n", squareRoot(144.0,ep));
printf ("Error with respect to %e  = %f\n", low_epsilon ,absoluteValue ( squareRoot (144.0, ep)- squareRoot (144.0,low_epsilon) ) );

printf ("squareRoot (17.5) = %f\n", squareRoot (17.5,ep));
printf ("Error with respect  to %e = %f\n", low_epsilon ,absoluteValue ( squareRoot (17.5, ep)- squareRoot (17.5,low_epsilon) ) );
return 0;
}

////////////////////////////////////////////////////

/* ch 7  Ex 4 */
/*4. Modify Program 7.8 so that the value of guess is printed each time
through the while loop. Notice how quickly the value of guess
converges to the square root. What conclusions can you reach about the
number of iterations through the loop, the number whose square root is
being calculated, and the value of the initial guess?*/
// Function to calculate the absolute value of a number
#include <stdio.h>
float absoluteValue (float x) ;
float squareRoot (float x , float ep) ;
float absoluteValue (float x)
{
if ( x < 0 )
x = -x;
return (x);
}
// Function to compute the square root of a number
float squareRoot (float x, float ep)
{
float guess = 1.0;
int i = 0 ;
while ( absoluteValue (guess * guess - x) >= ep )
{
guess = ( x / guess + guess ) / 2.0;
++i ;
printf("The guess at the step %i is %f\n ", i, guess) ;
}
return guess;
}
int main (void)
{
float ep ;
printf ("what is the epsilon u want use \n");
scanf("%f", &ep);
printf ("squareRoot (2.0) = %f\n", squareRoot (2.0, ep));
return 0;
}

////////////////////////////////////////////////////

/* ch 7  Ex 5 */

/*5. The criteria used for termination of the loop in the squareRoot()
function of Program 7.8 is not suitable for use when computing the square
root of very large or very small numbers. Rather than comparing the
difference between the value of x and the value of guess2, the program
should compare the ratio of the two values to 1. The closer this ratio gets
to 1, the more accurate the approximation of the square root.*/

// Function to calculate the absolute value of a number
#include <stdio.h>
float absoluteValue (float x) ;
float squareRoot (float x , float ep) ;
float absoluteValue (float x)
{
if ( x < 0 )
x = -x;
return (x);
}
// Function to compute the square root of a number
float squareRoot (float x, float ep)
{
float guess = 0.1;
int i = 0 ;
while ( absoluteValue ((guess * guess)/x - 1.0) >= ep )
{
guess = ( x / guess + guess ) / 2.0;
++i ;
printf("The guess at the step %i is %f\n ", i, guess) ;
}
return guess;
}
int main (void)
{
float ep , number ;
printf ("what is the epsilon u want use \n");
scanf("%f", &ep);
printf ("what is the number u want get square root \n");
scanf("%f", &number);
printf ("squareRoot (%.2f) = %f\n",number ,  squareRoot (number, ep));
return 0;
}
////////////////////////////////////////////////////
/* ch 7  Ex 6 */
/*6. Modify Program 7.8 so that the squareRoot() function accepts a
double precision argument and returns the result as a double precision
value. Be certain to change the value of the variable epsilon to reflect
the fact that double precision variables are now being used*/

#include <stdio.h>
double  absoluteValue (double  x) ;
double  squareRoot (double  x , double  ep) ;
double absoluteValue (double  x)
{
if ( x < 0 )
x = -x;
return (x);
}
// Function to compute the square root of a number
double squareRoot (double  x, double  ep)
{
 double guess = 0.1;
int i = 0 ;
while ( absoluteValue ((guess * guess)/x - 1.0) >= ep )
{
guess = ( x / guess + guess ) / 2.0;
++i ;
printf("The guess at the step %i is %f\n ", i, guess) ;
}
return guess;
}
int main (void)
{
float  ep_f , number_f ;
printf ("what is the epsilon u want use \n");
scanf("%f", &ep_f);
printf ("what is the number u want get square root \n");
scanf("%f", &number_f);

double  ep = (double)ep_f ;
double  number = (double)number_f ;

printf ("squareRoot (%g) = %g\n",number ,  squareRoot (number, ep));


return 0;
}
////////////////////////////////////////////////////

////////////////////////////////////////////////////
/* ch 7  Ex 7 */
/*7. Write a function that raises an integer to a positive integer power. Call the
function x_to_the_n() taking two integer arguments x and n. Have
the function return a long int, which represents the results of
calculating xn.*/
#include <stdio.h>
#include <stdlib.h>

long int x_to_the_n(int x, int n)
{
long int x_n =1.00;
for (int i = 0 ; i< n ; ++i)
{
    x_n *=x ;

}
return x_n ;
}

int main()
{
long int x_to_the_n(int x, int n);
long int x ;
int n ;
printf("Hello enter the number and the power  !\n");
scanf("%li", &x ) ;
scanf(" %i",  &n) ;
printf(" The number %li  power %i is %li \n", x, n,x_to_the_n( x,  n) );
return 0;
}

////////////////////////////////////////////////////
/* ch 7  Ex 8 */

/*
8. An equation of the form
ax2 + bx + c = 0
is known as a quadratic equation. The values of a, b, and c in the
preceding example represent constant values. So
4x2 - 17x - 15 = 0
represents a quadratic equation where a = 4, b = −17, and c = −15. The
values of x that satisfy a particular quadratic equation, known as the roots
of the equation, can be calculated by substituting the values of a, b, and c
into the following two formulas:
If the value of b2−4ac, called the discriminant, is less than zero, the roots
of the equation, x1 and x2, are imaginary numbers.
Write a program to solve a quadratic equation. The program should allow
the user to enter the values for a, b, and c. If the discriminant is less than
zero, a message should be displayed that the roots are imaginary;
otherwise, the program should then proceed to calculate and display the
two roots of the equation. (Note: Be certain to make use of the
squareRoot() function that you developed in this chapter.)

*/
#include <stdio.h>
#include <stdlib.h>
float squareRoot (float x);
void roots_quadratic_fun (float roots [2],float a, float b , float c) ;
float absoluteValue (float x) ;

float absoluteValue (float x)
{
if ( x < 0 )
x = -x;
return (x);
}

float squareRoot (float x)
{
const float epsilon = .00001;
float guess = 1.0;
if ( x < 0 )
{
printf ("Negative argument to squareRoot. message should be displayed that the roots are imaginary\n");
return -1.0;
}
while ( absoluteValue (guess * guess - x) >= epsilon )
guess = ( x / guess + guess ) / 2.0;
return guess;
}

void roots_quadratic_fun (float roots [2], float a, float b , float c)
{
    float discriminant_factor = b*b - 4*a*c ;
    float sq_discriminant_factor= squareRoot(discriminant_factor) ;
    roots[0] = (-b + sq_discriminant_factor)/(2*a) ;
    roots[1] = (-b - sq_discriminant_factor)/(2*a) ;
    printf("The first root %f \n" , roots[0] ) ;
    printf("The first root %f \n" , roots[1] ) ;
    return  ;
}

int main()
{
    float a,b,c ;
    float roots[2]={0,0} ;
    printf("please enter the three coefficient of quadrate fun a,b,c \n");
    scanf("%f",&a);
    scanf("%f",&b);
    scanf("%f",&c);
    roots_quadratic_fun ( roots , a,  b ,  c) ;

    return 0;
}



////////////////////////////////////////////////////
////////////////////////////////////////////////////
/* ch 7  Ex 9 */

/*9. The least common multiple (lcm) of two positive integers u and v is the
smallest positive integer that is evenly divisible by both u and v. Thus, the
lcm of 15 and 10, written lcm (15, 10), is 30 because 30 is the smallest
integer divisible by both 15 and 10. Write a function lcm() that takes
two integer arguments and returns their lcm. The lcm() function should
calculate the least common multiple by calling the gcd() function from
Program 7.6 in accordance with the following identity:
Click here to view code image
lcm (u, v) = uv / gcd (u, v) u, v >= 0*/
#include <stdio.h>
#include <stdlib.h>
int gcd (int u, int v) ;
int lcm (int u, int v) ;
int gcd (int u, int v)
{
if (  u <=0   )
{
printf ("Negative or zero argument to u or v.\n");
return 0;
}
if (  v <=0   )
{
printf ("Negative or zero argument to u or v. \n");
return 0;
}
int temp;
while ( v != 0 ) {
temp = u % v;
u = v;
v = temp;
}
return u;
}
int main (void)
{
int result, u,v ;
printf("what are the u & v\n") ;
scanf("%i",&u);
scanf("%i",&v);
result = gcd (u, v);
printf ("The lcm of %i and %i is %i\n", u,v,  (u*v)/result);
return 0;
}

////////////////////////////////////////////////////
////////////////////////////////////////////////////
/* ch 7  Ex 10 */
/*10. Write a function prime() that returns 1 if its argument is a prime
number and returns 0 otherwise.*/
#include <stdio.h>
#include <stdlib.h>
void is_prime(int x);

void is_prime(int x)
{
     if ( x == 1)
     {
         printf(" The number %i is  not prime\n", x);

     }
    else

    {
       int i_prime = 0 ;
        for (int i = 2 ; i <= 9 ; ++i)
        {
            if (x%i == 0)
            {
              ++i_prime ;
            }

        }
        if (i_prime == 0 || i_prime == 1 )
        {
            printf(" The number %i is   prime\n", x);

        }
        if (i_prime > 1)
        {
            printf(" The number %i is not prime\n", x);

        }

    }

return  ;
}

int main()
{
    int x , counter ;
    printf("how many  number \n");
    scanf("%i" , &counter) ;
    for (int i =1; i <= counter ; ++i )
    {
        printf("Enter the number \n");
        scanf("%i" , &x) ;
        is_prime(x);
    }
    return 0;
}

////////////////////////////////////////////////////
////////////////////////////////////////////////////
/* ch 7  Ex 11 */
/*11. Write a function called arraySum() that takes two arguments: an
integer array and the number of elements in the array. Have the function
return as its result the sum of the elements in the array.*/
#include <stdio.h>
#include <stdlib.h>

int arraysum(int M[], int n)
{
    int sum = 0 ;
    for (int i = 0 ; i < n ; ++i)
    {
        sum += M[i] ;
    }
    return sum ;
}

int main()
{
    int n ;
    printf("How many elemnts are in the array\n");
    scanf("%i",&n);
    int M[n] ;
    for (int i = 0 ; i < n ; ++i)
    {
        printf("the element M[%i]\n", i);
        scanf("%i",&M[i]);
    }
    printf("the sum %i\n", arraysum(M, n) );
    return 0;
}


////////////////////////////////////////////////////
////////////////////////////////////////////////////
/* ch 7  Ex 12 */

/*12. A matrix M with i rows, j columns can be transposed into a matrix N
having j rows and i columns by simply setting the value of Na,b equal to
the value of Mb,a for all relevant values of a and b.
a. Write a function transposeMatrix() that takes as an argument a 4
× 5 matrix and a 5 × 4 matrix. Have the function transpose the 4 × 5
matrix and store the results in the 5 × 4 matrix. Also write a main()
routine to test the function.
b. Using variable-length arrays, rewrite the transposeMatrix()
function developed in exercise 12a to take the number of rows and
columns as arguments, and to transpose the matrix of the specified
dimensions.*/

#include <stdio.h>
#include <stdlib.h>

void transpose( int i , int j , float M[i][j], float N[j][i] )
{
    for (int ii = 0 ; ii < i ; ++ii)
     for (int jj = 0 ; jj < j ; ++jj)
    {
       N[jj][ii] = M[ii][jj] ;
    }
    return ;
}

int main()
{
    int i, j ;
    printf("How many rows are in the Matrix\n");
    scanf("%i",&i );
    printf("How many columns are in the Matrix\n");
    scanf(" %i", &j);
    float M[i][j] ;
    float N[j][i]  ;
    for (int ii = 0 ; ii < i ; ++ii)
     for (int jj = 0 ; jj < j ; ++jj)
    {
        printf("the element M[%i][%i]\n", ii,jj);
        scanf("%f",&M[ii][jj]);
    }
transpose( i, j , M,  N ) ;
for (int ii = 0 ; ii < i ; ++ii)
     for (int jj = 0 ; jj < j ; ++jj)
    {
        printf("the element N[%i][%i] is %f\n", jj, ii, N[jj][ii]);
    }
    return 0;
}
////////////////////////////////////////////////////
////////////////////////////////////////////////////
/* ch 7  Ex 13 */
/*13. Modify the sort() function from Program 7.12 to take a third argument
indicating whether the array is to be sorted in ascending or descending
order. Then modify the sort() algorithm to correctly sort the array into
the indicated order.*/

////////////////////////////////////////////////////



























////////////////////////////////////////////////////
/* ch 6  Ex 2 */

/*2. Modify Program 6.1 so that the elements of the array values are
initially set to 0. Use a for loop to perform the initialization.*/
#include <stdio.h>
int main (void)
{
int values[10];
int index,x;

for ( index = 0; index < 10; ++index )
    {
printf("Enter the value of the element corresponding to the index %i\n", index ) ;
scanf("%i", &x) ;
values[index] = x ;
}

for ( index = 0; index < 10; ++index )
    {

printf ("values[%i] = %i\n", index, values[index]);
}
return 0;
}


////////////////////////////////////////////////////

/* ch 6  Ex 3 */
/*3. Program 6.2 permits only 20 responses to be entered. Modify that
program so that any number of responses can be entered. So that the user
does not have to count the number of responses in the list, set up the
program so that the value 999 can be keyed in by the user to indicate that
the last response has been entered. (Hint: You can use the break
statement here if you want to exit your loop.)*/
#include <stdio.h>
int main (void)
{
int ratingCounters[11], i, response ;
int keyed = 0 ;
for ( i = 1; i <= 10; ++i )
ratingCounters[i] = 0;
do  {
printf ("Enter your responses\n");
scanf ("%i", &response);

printf ("Enter your keyed, if it is 999, that means u will not enter no more  resposes \n");
scanf ("%i", &keyed);

if ( response < 1 || response > 10 )
printf ("Bad response: %i\n", response);
else
++ratingCounters[response];

}
while (keyed!=999);
printf ("\n\nRating Number of Responses\n");
printf ("------ -------------------\n");
for ( i = 1; i <= 10; ++i )
printf ("%4i%14i\n", i, ratingCounters[i]);
return 0;
}


////////////////////////////////////////////////////

/* ch 6  Ex 4 */
/*4. Write a program that calculates the average of an array of 10 floating point values.*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    float M[10] , sum=0;

for(int i = 0 ; i < 10 ; ++i)
{
    printf("Enter the value of element coresponding to index %i\n", i) ;
    scanf("%f", &M[i] ) ;
    sum += M[i] ;
}
printf("The sum is %f and the average is %f\n", sum, sum/10.0) ;

    return 0;
}

////////////////////////////////////////////////////

/* ch 6  Ex 5 */

/*5. What output do you expect from the following program?*/
#include <stdio.h>
int main (void)
{
int numbers[10] = { 1, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
int i, j;
for ( j = 0; j < 10; ++j )
for ( i = 0; i < j; ++i )
numbers[j] += numbers[i];
for ( j = 0; j < 10; ++j )
printf ("%i ", numbers[j]);
printf ("\n");
return 0;
}
// Every number is the sum of all proceding

////////////////////////////////////////////////////
/* ch 6  Ex 6 */




////////////////////////////////////////////////////

////////////////////////////////////////////////////
/* ch 6  Ex 7 */

////////////////////////////////////////////////////
/* ch 6  Ex 8 */
//8. Find out if your compiler supports variable-length arrays. If it does, write
a small program to test the feature out //
#include <stdio.h>
#include <stdlib.h>
int main()
    int array_size,i ;
    printf(" Enter The Array size  \n" ) ;
    scanf("%i", &array_size) ;
    float M[array_size ] ;
    for (i=0 ; i<array_size; ++ i ) {
        printf(" Enter The value of element M[%i]  \n", i ) ;
        scanf("%f", &M[i]) ;
    }
    for (i=0 ; i<array_size; ++ i )
    printf(" The value of element M[%i]  = %f\n", i,M[i] ) ;
    return 0;
}

////////////////////////////////////////////////////












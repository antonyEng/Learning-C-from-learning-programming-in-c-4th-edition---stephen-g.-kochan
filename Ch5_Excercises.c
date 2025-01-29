////////////////////////////////////////////////////
/* ch 5  Ex 2 */

/*2. Write a program that asks the user to type in two integer values at the
terminal. Test these two numbers to determine if the first is evenly
divisible by the second, and then display an appropriate message at the
terminal.*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int value1, value2 ;
    printf(" Enter the two values.\n") ;
    scanf("%i %i", &value1, &value2);
    if (value1%value2 == 0)
        printf(" The first is devisiple by second\n") ;
    else
        printf(" The first is not devisiple by second\n") ;

    return 0;
}

////////////////////////////////////////////////////

/* ch 5  Ex 3 */
/*3. Write a program that accepts two integer values typed in by the user.
Display the result of dividing the first integer by the second, to threedecimal-place accuracy. Remember to have the program check for
division by zero*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float value1, value2 ;
    printf(" Enter the two values.\n") ;
    scanf("%f %f", &value1, &value2);
    if (value2 == 0)
        printf(" The second value is zero cannot perform the devision \n") ;
    else
        printf(" The devision is %0.3f\n", value1/value2) ;

    return 0;
}

////////////////////////////////////////////////////



















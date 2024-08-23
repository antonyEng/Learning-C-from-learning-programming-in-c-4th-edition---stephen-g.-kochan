/* ch 3  Ex 4 */

#include <stdio.h>
#include <stdlib.h>

int main()
{
     float F = 27;
    printf("The temp in celecius if %f\n", (F - 32) / 1.8);
    return 0;
}

/* ch 3  Ex 5 */
#include <stdio.h>
int main (void)
{
char c, d;
c = 'd';
d = c;
printf ("d = %c\n", d);
return 0;
}



/* ch 3  Ex 6 */
#include <stdio.h>
#include <stdlib.h>
/* 3x3 - 5x2 + 6 */
int main()
{
    float x;
    x = 2.55 ;
    printf("the  polynomiaal %f\n", 3*x*x*x-5*x*x+6);
    return 0;
}



/* ch 3  Ex 7 */
#include <stdio.h>
#include <stdlib.h>

/* (3.31 x 10-8 x 2.01 x 10-7) / (7.16 x 10-6 + 2.01 x 10-8) */

int main()
{
    float y1,y2 ;
    y1= 3.31e-8*2.01e-7 ;
    y2= 7.16e-6+ 2.01e-8 ;

    printf("The result %e\n", y1/y2);
    return 0;
}




/* ch 3  Ex 9 */

#include <stdio.h>
#include <stdlib.h>
/* Next_multiple = i + j - i % j */
int main()
{

    int i , j ;
    i =365 ;
    j = 7 ;
    int k ;
    k = i + j - i % j ;
    printf("The i is %i and  j is %i and result is %i\n ", i,j , k ) ;
    i =996 ;
    j =  4;
    k = i + j - i % j ;
printf("The i is %i and  j is %i and result is  %i\n ", i,j ,k ) ;

i =12258 ;
    j = 23 ;
    k = i + j - i % j ;
printf("The i is %i and  j is %i and result is %i\n ", i,j , k) ;

}



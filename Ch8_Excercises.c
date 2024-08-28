////////////////////////////////////////////////////
/* ch 8  Ex 2 */
/*2. In certain applications, particularly in the financial area, it is often
necessary to calculate the number of elapsed days between two dates. For
example, the number of days between July 2, 2015, and July 16, 2015, is
obviously 14. But how many days are there between August 8, 2014, and
February 22, 2015? This calculation requires a bit more thought.
Luckily, a formula can be used to calculate the number of days between
two dates. This is affected by computing the value of N for each of the two
dates and then taking the difference, where N is calculated as follows:
N = 1461 x f(year, month) / 4 + 153 x g(month) / 5 + day
f(year, month) = year - 1 if month <= 2
                 year        otherwise
g(month) = month + 13 if month <= 2
           month + 1      otherwise

So the number of days between the two dates is shown to be 202. The
preceding formula is applicable for any dates after March 1, 1900 (1 must
be added to N for dates from March 1, 1800, to February 28, 1900, and 2
must be added for dates between March 1, 1700, and February 28, 1800).
Write a program that permits the user to type in two dates and then
calculates the number of elapsed days between the two dates. Try to
structure the program logically into separate functions. For example, you
should have a function that accepts as an argument a date structure and
returns the value of N computed as shown previously. This function can
then be called twice, once for each date, and the difference taken to
determine the number of elapsed day

*/
#include <stdio.h>
#include <stdlib.h>

struct date
{
    int day    ;
    int month  ;
    int year   ;
};
int the_days_date(struct date wh) ;
int f(struct date wh) ;
int g(struct date wh) ;

int the_days_date(struct date wh)
{
       int N ;
       N = (int)(1461 * f(wh) / 4 + 153 * g(wh) / 5 + wh.day) ;
       return N;
}

int f(struct date wh)
{
    int y ;
    if(wh.month <= 2)
    {
        y= wh.year - 1 ;
    }
    else
    {
       y = wh.year  ;
    }
  return y ;
}
int g(struct date wh)
{
    int y ;
    if(wh.month <= 2)
    {
        y= wh.month +13 ;
    }
    else
    {
       y =  wh.month +1 ;
    }
  return y ;
}


int main()
{
    struct date d1 ;
    struct date d2 ;

printf("Enter the date one day : month : year \n") ;
scanf("%i : %i : %i" , &d1.day, &d1.month, &d1.year);
printf("Enter the date two day : month : year \n") ;
scanf("%i : %i : %i" , &d2.day, &d2.month, &d2.year);
printf("The time elaspse is %i\n", the_days_date(d2) -the_days_date(d1) ) ;


    return 0;
}

////////////////////////////////////////////////////
/* ch 8  Ex 3 */

/*3. Write a function elapsed_time that takes as its arguments two time
structures and returns a time structure that represents the elapsed time (in
hours, minutes, and seconds) between the two times. So the call
elapsed_time (time1, time2)
where time1 represents 3:45:15 and time2 represents 9:44:03, should
return a time structure that represents 5 hours, 58 minutes, and 48
seconds. Be careful with times that cross midnight.*/

#include <stdio.h>
#include <stdlib.h>

struct time
{
    int hour    ;
    int minute  ;
    int second   ;
};
struct time elapsed_time(struct time t1, struct time t2 ) ;


struct time elapsed_time(struct time t1, struct time t2 )
{
       struct time elabse ;

       if (t2.hour == 0)
       {
         t2.hour =  24 ;
       }
       elabse = (struct time) {t2.hour - t1.hour ,t2.minute - t1.minute , t2.second - t1.second  } ;
       if (elabse.minute < 0 )
       {
           elabse.hour =  elabse.hour -1 ;
           elabse.minute =  elabse.minute + 60 ;
       }
       if (elabse.second < 0 )
       {
           elabse.minute =  elabse.minute -1 ;
           elabse.second =  elabse.second + 60 ;
       }


       return elabse;
}


int main()
{
    struct time t1, t2 , te;


printf("Enter the time one ,  hour : minute : second \n") ;
scanf("%i : %i : %i" , &t1.hour, &t1.minute, &t1.second);
printf("Enter the date two hour : minute : second  \n") ;
scanf("%i : %i : %i" , &t2.hour, &t2.minute, &t2.second);
te= elapsed_time(t1,t2) ;
printf("The time elaspse is %i : %i : %i \n", te.hour, te.minute, te.second ) ;


    return 0;
}


////////////////////////////////////////////////////
/* ch 8  Ex 4 */

/*. If you take the value of N as computed in exercise 2, subtract 621,049
from it, and then take that result modulo 7, you get a number from 0 to 6
that represents the day of the week (Sunday through Saturday,
respectively) on which the particular day falls. For example, the value of
N computed for August 8, 2004, is 732,239 as derived previously.
732,239 − 621,049 gives 111,190, and 111,190 % 7 gives 2, indicating
that this date falls on a Tuesday.
Use the functions developed in the previous exercise to develop a
program that displays the day of the week on which a particular date falls.
Make certain that the program displays the day of the week in English
(such as “Monday”).*/

#include <stdio.h>
#include <stdlib.h>


struct weak_def
{
int index;
char name[3];
};




struct date
{
    int day    ;
    int month  ;
    int year   ;
};
int the_days_date(struct date wh) ;
int f(struct date wh) ;
int g(struct date wh) ;

int the_days_date(struct date wh)
{
       int N ;
       N = (int)(1461 * f(wh) / 4 + 153 * g(wh) / 5 + wh.day) ;
       return N;
}

int f(struct date wh)
{
    int y ;
    if(wh.month <= 2)
    {
        y= wh.year - 1 ;
    }
    else
    {
       y = wh.year  ;
    }
  return y ;
}
int g(struct date wh)
{
    int y ;
    if(wh.month <= 2)
    {
        y= wh.month +13 ;
    }
    else
    {
       y =  wh.month +1 ;
    }
  return y ;
}


int main()
{
    struct date d1 ;
    const struct weak_def week[7] =
{{0,{'S','u','n'}},{1,{'M','o','n'}},{2,{ 'T','u','e'}},{ 3,{'W','e','d'}},{ 4,{'T','h','u'}},{5,{'F','r','i'}},{ 6,{'S','a','t'}} };


printf("Enter the date in form day : month : year \n") ;
scanf("%i : %i : %i" , &d1.day, &d1.month, &d1.year);

int x = (the_days_date(d1) - 621049 )%7 ;

for (int i = 0 ; i < 7 ; ++i)
{
  if (week[i].index==x)
    {
           printf("The Day is %c%c%cday\n", week[i].name[0], week[i].name[1],week[i].name[2] ) ;
           return 1;
    }
}



    return 0;
}

////////////////////////////////////////////////////
/* ch 8  Ex 5 */


////////////////////////////////////////////////////
/* ch 8  Ex 6 */


////////////////////////////////////////////////////
/* ch 10  Ex 2 */
/*2. Write a function called insertEntry() to insert a new entry into a
linked list. Have the procedure take as arguments a pointer to the list entry
to be inserted (of type struct entry as defined in this chapter), and a
pointer to an element in the list after which the new entry is to be
inserted*/
// 2. Write a function called insertEntry()
#include <stdio.h>
struct entry
{
int value;
struct entry *next;
};

void insertEntry(struct entry *n_entry,struct entry *n_element )
{
    int v_alue ;
    printf("enter the int value ");
    scanf("%i", &v_alue);

    n_entry -> value =   v_alue  ;
    n_entry -> next = n_element  ;
}

int main (void)
{
struct entry n1, n2, n3 , n4 ;
n4.value =  0  ;
n4.next =  (struct entry*)0  ;
void insertEntry(struct entry *n_entry,struct entry *n_element ) ;
insertEntry(&n1,&n2 ) ;
insertEntry(&n2,&n3 ) ;
insertEntry(&n3,&n4 ) ;
printf("The value of n1 = %i , n2 = %i ,  n3 = %i\n", n1.value , n2.value, n3.value);
printf("The value of n1.next -> value = %i , n2.next -> value= %i ,  n3.next -> value = %i\n",n1.next -> value , n2.next -> value, n3.next -> value);

return 0;
}

// further showing the pointers works
// 2. Write a function called insertEntry()
#include <stdio.h>
struct entry
{
int value;
struct entry *next;
};

void insertEntry(struct entry *n_entry,struct entry *n_element )
{
    int v_alue ;
    printf("enter the int value ");
    scanf("%i", &v_alue);

    n_entry -> value =   v_alue  ;
    n_entry -> next = n_element  ;
}

int main (void)
{
struct entry n1, n2, n3 , n4 ;
n4.value =  0  ;
n4.next =  (struct entry*)0  ;
void insertEntry(struct entry *n_entry,struct entry *n_element ) ;
insertEntry(&n1,&n2 ) ;
insertEntry(&n2,&n3 ) ;
insertEntry(&n3,&n4 ) ;
printf("The value of n1 = %i , n2 = %i ,  n3 = %i\n", n1.value , n2.value, n3.value);
printf("The value of n1.next -> value = %i , n2.next -> value= %i ,  n3.next -> value = %i\n",n1.next -> value , n2.next -> value, n3.next -> value);
n1.next -> value = 12  ;
printf("The value of n1 = %i , n2 = %i ,  n3 = %i\n", n1.value , n2.value, n3.value);
printf("The value of n1.next -> value = %i , n2.next -> value= %i ,  n3.next -> value = %i\n",n1.next -> value , n2.next -> value, n3.next -> value);
n3.value = 17  ;
printf("The value of n1 = %i , n2 = %i ,  n3 = %i\n", n1.value , n2.value, n3.value);
printf("The value of n1.next -> value = %i , n2.next -> value= %i ,  n3.next -> value = %i\n",n1.next -> value , n2.next -> value, n3.next -> value);

return 0;
}
////////////////////////////////////////////////////
/* ch 10  Ex 4 */
#include <stdio.h>
struct entry
{
int value;
struct entry *next;
};
struct entry  null = {.value = 0 , .next =  (struct entry*)0 }  ;

void insertEntry(struct entry *n_entry,struct entry *n_element )
{
    int v_alue ;
    printf("enter the int value ");
    scanf("%i", &v_alue);

    n_entry -> value =   v_alue  ;
    n_entry -> next = n_element  ;
}

void removeEntry(struct entry *n_entry )
{
    n_entry -> next  =  &null ;
}

int main (void)
{
struct entry n1, n2, n3  ;
void insertEntry(struct entry *n_entry,struct entry *n_element ) ;
void removeEntry(struct entry *n_entry );

insertEntry(&n1,&n2 ) ;
insertEntry(&n2,&n3 ) ;
insertEntry(&n3,&null ) ;
printf("The value of n1 = %i , n2 = %i ,  n3 = %i\n", n1.value , n2.value, n3.value);
printf("The value of n1.next -> value = %i , n2.next -> value= %i ,  n3.next -> value = %i\n",n1.next -> value , n2.next -> value, n3.next -> value);

removeEntry(&n2 ) ;
printf("The value of n1 = %i , n2 = %i ,  n3 = %i\n", n1.value , n2.value, n3.value);
printf("The value of n1.next -> value = %i , n2.next -> value= %i ,  n3.next -> value = %i\n",n1.next -> value , n2.next -> value, n3.next -> value);

return 0;
}


////////////////////////////////////////////////////
/* ch 10  Ex 5 */
/*5. A doubly linked list is a list in which each entry contains a pointer to the
preceding entry in the list as well as a pointer to the next entry in the list.
Define the appropriate structure definition for a doubly linked list entry
and then write a small program that implements a small doubly linked list
and prints out the elements of the list.*/

#include <stdio.h>
struct entry
{
int value;
struct entry *previous;
struct entry *next;
};
struct entry  null_next = {.value = 0 ,.previous =  (struct entry*)0 , .next =  (struct entry*)0 }  ;
struct entry  null_previous = {.value = 0 ,.previous =  (struct entry*)0 ,.next =  (struct entry*)0 }  ;

void insertEntry(struct entry *n_element_previous, struct entry *n_entry,struct entry *n_element_next )
{
    int v_alue ;
    printf("enter the int value ");
    scanf("%i", &v_alue);

    n_entry -> value =   v_alue  ;
    n_entry -> next = n_element_next  ;
    n_entry -> previous = n_element_previous  ;
}

int main (void)
{
struct entry n1, n2, n3  ;
void insertEntry(struct entry *n_element_previous, struct entry *n_entry,struct entry *n_element_next ) ;

insertEntry(&null_previous, &n1,&n2 ) ;
insertEntry(&n1,&n2,&n3 ) ;
insertEntry(&n2,&n3,&null_next ) ;
printf("The value of n1 = %i , n2 = %i ,  n3 = %i\n", n1.value , n2.value, n3.value);
printf("The value of n1.next -> value = %i , n2.next -> value= %i ,  n3.next -> value = %i\n",n1.next -> value , n2.next -> value, n3.next -> value);
printf("The value of n1.previous -> value = %i , n2.previous -> value= %i ,  n3.previous -> value = %i\n",n1.previous -> value , n2.previous -> value, n3.previous -> value);

return 0;
}


////////////////////////////////////////////////////
/* ch 10  Ex 6 */
/*6. Develop insertEntry() and removeEntry() functions for a
doubly linked list that are similar in function to those developed in
previous exercises for a singly linked list. Why can your
removeEntry() function now take as its argument a direct pointer to
the entry to be removed from the list?*/
#include <stdio.h>
struct entry
{
int value;
struct entry *previous;
struct entry *next;
};
struct entry  null_next = {.value = 0 ,.previous =  (struct entry*)0 , .next =  (struct entry*)0 }  ;
struct entry  null_previous = {.value = 0 ,.previous =  (struct entry*)0 ,.next =  (struct entry*)0 }  ;

void insertEntry(struct entry *n_element_previous, struct entry *n_entry,struct entry *n_element_next )
{
    int v_alue ;
    printf("enter the int value ");
    scanf("%i", &v_alue);

    n_entry -> value =   v_alue  ;
    n_entry -> next = n_element_next  ;
    n_entry -> previous = n_element_previous  ;
}
void removeEntry(struct entry *n_entry )
{
    n_entry -> next     =  &null_next ;
    n_entry -> previous =  &null_previous ;
}
int main (void)
{
struct entry n1, n2, n3  ;
void insertEntry(struct entry *n_element_previous, struct entry *n_entry,struct entry *n_element_next ) ;
void removeEntry(struct entry *n_entry ) ;

insertEntry(&null_previous, &n1,&n2 ) ;
insertEntry(&n1,&n2,&n3 ) ;
insertEntry(&n2,&n3,&null_next ) ;
printf("The value of n1 = %i , n2 = %i ,  n3 = %i\n", n1.value , n2.value, n3.value);
printf("The value of n1.next -> value = %i , n2.next -> value= %i ,  n3.next -> value = %i\n",n1.next -> value , n2.next -> value, n3.next -> value);
printf("The value of n1.previous -> value = %i , n2.previous -> value= %i ,  n3.previous -> value = %i\n",n1.previous -> value , n2.previous -> value, n3.previous -> value);

removeEntry(&n2 ) ;
printf("The value of n1 = %i , n2 = %i ,  n3 = %i\n", n1.value , n2.value, n3.value);
printf("The value of n1.next -> value = %i , n2.next -> value= %i ,  n3.next -> value = %i\n",n1.next -> value , n2.next -> value, n3.next -> value);
printf("The value of n1.previous -> value = %i , n2.previous -> value= %i ,  n3.previous -> value = %i\n",n1.previous -> value , n2.previous -> value, n3.previous -> value);

return 0;
}

////////////////////////////////////////////////////
/* ch 10  Ex 7 */
/*7. Write a pointer version of the sort() function from Chapter 7,
“Working with Functions.” Be certain that pointers are exclusively used
by the function, including index variables in the loops.*/
// Program to sort an array of integers into ascending order
/*#include <stdio.h>
void sort (int a[], int n)
{
int i, j, temp;
for ( i = 0; i < n - 1; ++i )
for ( j = i + 1; j < n; ++j )
if ( a[i] > a[j] ) {
temp = a[i];
a[i] = a[j];
a[j] = temp;
}
}
int main (void)
{
int i;
int array[16] = { 34, -5, 6, 0, 12, 100, 56, 22, 44, -3, -9, 12, 17, 22, 6, 11 };
void sort (int a[], int n);
printf ("The array before the sort:\n");
for ( i = 0; i < 16; ++i )
printf ("%i ", array[i]);
sort (array, 16);
printf ("\n\nThe array after the sort:\n");
for ( i = 0; i < 16; ++i )
printf ("%i ", array[i]);
printf ("\n");
return 0;
}*/
// Program to sort an array of integers into ascending order
#include <stdio.h>
void sort (int a[], int n)
{
int temp, *ptr_1,  *const arrayend = a + n  ;
for (  int i = 0 ; i <= n ; ++i )
for (ptr_1 = a  ; ptr_1 < arrayend ; ++ptr_1)
   if ( *ptr_1  > *( ptr_1 + 1 ) )
    {
   temp    = *( ptr_1 + 1 );
   *( ptr_1 + 1 ) = *ptr_1 ;
   *ptr_1 = temp ;

   }

}
int main (void)
{
int i ;
int array[16] = { 34, -5, 6, 0, 12, 100, 56, 22, 44, -3, -9, 12, 17, 22, 6, 11 };
void sort (int a[], int n);


printf ("The array before the sort:\n");
for ( i = 0; i < 16; ++i )
printf ("%i ", array[i]);

sort (array, 16);
printf ("\n\nThe array after the sort:\n");
for ( i = 0; i < 16; ++i )
printf ("%i ", array[i]);
printf ("\n");
return 0;
}

////////////////////////////////////////////////////
/* ch 10  Ex 8 */
/*8. Write a function called sort3() to sort three integers into ascending
order. (This function is not to be implemented with arrays.)*/
#include <stdio.h>
#include <stdlib.h>

void sort_3(float *p_1 , float *p_2, float *p_3  )
{
    float t ;
    if (*p_1 < *p_2 && *p_1 < *p_3  ) // p_1 is the lowst
    {
        if (*p_3 < *p_2)
        {
        t     = *p_2 ;
        *p_2  = *p_3 ;
        *p_3  = t ;
        }

    }
    else if (*p_2 < *p_1 && *p_2 < *p_3  ) // p_2 is the lowest
    {
        t     = *p_2 ;
        *p_2  = *p_1 ;
        *p_1  = t ;
        if (*p_3 < *p_2)
        {
        t     = *p_2 ;
        *p_2  = *p_3 ;
        *p_3  = t ;
        }
    }
    else // p_3 is the lowest
    {
        t     = *p_3 ;
        *p_3  = *p_1 ;
        *p_1  = t ;
        if (*p_3 < *p_2)
        {
        t     = *p_2 ;
        *p_2  = *p_3 ;
        *p_3  = t ;
        }
    }
}


int main()
{
    void sort_3(float *p_1 , float *p_2, float *p_3  ) ;
    float p1, p2, p3 , *a , *b  , *c ;

    printf(" Enter the three floats p1 , p2  and p3  \n") ;
    scanf("%f %f %f", &p1, &p2, &p3) ;

    a = &p1;
    b = &p2;
    c = &p3;

    sort_3( a ,  b,  c  ) ;
    printf (" p1 %.4f ", p1);
    printf (" p2 %.4f ", p2);
    printf (" p3 %.4f ", p3);
    printf ("\n");
    return 0;
}


////////////////////////////////////////////////////
/* ch 10  Ex 11*/
/*11. Given the definition of a date structure as defined in this chapter, write
a function called dateUpdate() that takes a pointer to a date
structure as its argument and that updates the structure to the following day
(see Program 8.4)*/
/*program 8.4*/
// Program to determine tomorrow's date
#include <stdio.h>
#include <stdbool.h>
struct date
{
int month;
int day;
int year;
};
// Function to calculate tomorrow's date
struct date dateUpdate (struct date today)
{
struct date tomorrow;
int numberOfDays (struct date d);
if ( today.day != numberOfDays (today) ) {
tomorrow.day = today.day + 1;
tomorrow.month = today.month;
tomorrow.year = today.year;
} 
else if ( today.month == 12 ) { // end of year
tomorrow.day = 1;
tomorrow.month = 1;
tomorrow.year = today.year + 1;
} 
else { // end of month
tomorrow.day = 1;
tomorrow.month = today.month + 1;
tomorrow.year = today.year;
} r
eturn tomorrow;
} 
// Function to find the number of days in a month
int numberOfDays (struct date d)
{
int days;
bool isLeapYear (struct date d);
const int daysPerMonth[12] =
{ 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
if ( isLeapYear (d) && d.month == 2 )
days = 29;
else
days = daysPerMonth[d.month - 1];
return days;
} 
// Function to determine if it's a leap year
bool isLeapYear (struct date d)
{
bool leapYearFlag;
if ( (d.year % 4 == 0 && d.year % 100 != 0) ||
d.year % 400 == 0 )
leapYearFlag = true; // It's a leap year
else
leapYearFlag = false; // Not a leap year
return leapYearFlag;
} i
nt main (void)
{
struct date dateUpdate (struct date today);
struct date thisDay, nextDay;
printf ("Enter today's date (mm dd yyyy): ");
scanf ("%i%i%i", &thisDay.month, &thisDay.day,
&thisDay.year);
nextDay = dateUpdate (thisDay);
printf ("Tomorrow's date is
%i/%i/%.2i.\n",nextDay.month,
nextDay.day, nextDay.year % 100);
return 0;
}
// with pointers
// Program to determine tomorrow's date
#include <stdio.h>
#include <stdbool.h>
struct date
{
int month;
int day;
int year;
};
// Function to calculate tomorrow's date
void dateUpdate (struct date *today)
{
struct date tomorrow;
int numberOfDays (struct date *d);
if ( today->day != numberOfDays (today) )
    {
tomorrow.day = today->day + 1;
tomorrow.month = today->month;
tomorrow.year = today->year;
}
else if ( today->month == 12 )
    { // end of year
tomorrow.day = 1;
tomorrow.month = 1;
tomorrow.year = today->year + 1;
}
else { // end of month
tomorrow.day = 1;
tomorrow.month = today->month + 1;
tomorrow.year = today->year;
}

today->day   = tomorrow.day    ;
today->month = tomorrow.month  ;
today->year  = tomorrow.year  ;


}
// Function to find the number of days in a month
int numberOfDays (struct date *d)
{
int days;
bool isLeapYear (struct date *d);
const int daysPerMonth[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
if ( isLeapYear (d) && d->month == 2 )
days = 29;
else
days = daysPerMonth[d->month - 1];
return days;
}
// Function to determine if it's a leap year
bool isLeapYear (struct date *d)
{
bool leapYearFlag;
if ( (d->year % 4 == 0 && d->year % 100 != 0) || d->year % 400 == 0 )
leapYearFlag = true; // It's a leap year
else
leapYearFlag = false; // Not a leap year
return leapYearFlag;
}
int main (void)
{
void dateUpdate (struct date *today);
struct date thisDay, *Day;
Day = &thisDay ;

printf ("Enter today's date (mm dd yyyy): ");
scanf ("%i%i%i", &thisDay.month, &thisDay.day, &thisDay.year);
printf ("today's date is %i/%i/%.2i.\n", Day -> month, Day  -> day, (Day -> year) % 100);

dateUpdate (Day);
printf ("Tomorrow's date is %i/%i/%.2i.\n", Day -> month, Day  -> day, Day -> year % 100);
return 0;
}


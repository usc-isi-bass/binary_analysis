#include <ctype.h>
#include <errno.h>
#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <locale.h>
#include <math.h>
#include <setjmp.h>
#include <signal.h>
#include <stdarg.h>
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>


void main()
{
 int number, largest, second, counter,n;
 counter = 1;

 scanf("%d",&n);
 largest=-10000000; second=largest;
 while ( counter <= n )
 {
  
  scanf ( "%d", &number );

  if ( number >= largest )
  {
      second  = largest;
      largest = number;
  }
  else if (second< number&&number < largest)
   second =number;
  else if(number<= second)
	  second=second;
  
  counter++;
 }
 printf ( "%d\n", largest );
 printf ( "%d\n", second);
} 
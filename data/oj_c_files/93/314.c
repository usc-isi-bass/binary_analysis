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

main ()
{
  int n;
  scanf ("%d",&n);
  int count=0 ;
  int t1,t2,t3;
  if (n%3==0)
  {
    count++;
	t1=3;
	if (n%5==0)
	{
	  count ++;
	  t2=5;
	  if (n%7==0)
	  {
	  count ++;
	  t3=7;
	  }
	}
	else if (n%7==0)
	{
	  count ++;
	  t2=7;
	}		
  }
  else if (n%5==0)
  {
    count ++;
    t1=5;
    if (n%7==0)
    {
	  count ++;
	  t2=7;
	}
  }	
  else if (n%7==0)
  {
	count++;
    t1=7;
  }

  if (count==3)
  {
   printf ("%d %d %d",t1,t2,t3);
  }
  else if (count==2)
  {
    printf ("%d %d",t1,t2);
  }
  else if (count==1)
  {
  printf ("%d",t1);
  }
  else if (count==0)
  {
  printf ("n");
  }
	
}
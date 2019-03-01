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
  char a[10000];
  gets (a);
  int i;
  for (i=0;a[i]!='\0';i++)
  {
    if (a[i]<='z'&&a[i]>='a')
    {
	  a[i]=a[i]+('A'-'a');	
	}
  }
    int count =1;
     for (i=0;a[i]!='\0';i++)
     {
       if (a[i+1]==a[i])
      {
			 count++;
	  }
	   else
	   {
			printf ("(%c,%d)",a[i],count);
			count=1;
	   }
	 }
  	
	
	
	
	
	
	
	
	
}
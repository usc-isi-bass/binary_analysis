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

/*
 * 1.cpp
 *
 *  Created on: 2010-10-17
 *      Author: lenovo
 */
int main ()
{
	 int i,j,a[17],t,sum;
do{
	   t = -1;sum = 0;
	  for (i=1;i<=16;i++)
	   { cin>>a[i];
	      t++;
	     if (a[i]==0||a[i]==-1)
		   break;
	   }


	   for (i=1;i<=t;i++)
		   for (j=1;j<=t;j++)
		   {
			   if (a[j]==a[i]*2)
				   sum++;
		   }
	  if (a[1]!=-1)
      cout<<sum<<endl;
  }
  while (a[1]!=-1);
       return 0;
}



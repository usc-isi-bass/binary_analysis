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
 * practice.cpp
 *???
 *  Created on: 2011-11-5
 *      Author: ???
 */
int main ()
{
  int i,n,a[1000]={0},j,k,m;
  cin>>n;
  cin>>a[1];
  for (i=2,m=2;m<=n;i++,m++)
  {
	  cin>>a[i];
	  for (j=1;j<i;j++)
	  {
		  if (a[i]==a[j])
		  {
			  i--;
			  break;
		  }
	  }
  }
  cout<<a[1];
  for (k=2;k<=i-1;k++)
	  cout<<' '<<a[k];
	return 0;
}

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
  int i,b=0,s,t,c,a[300];
  for(i=1;;i++)
  {
	  scanf("%d",&a[i]);
	  if(getchar()!=',') break;
  }
  for(s=1;s<i;s++)
	  for(t=1;t<i+1-s;t++)
	  if(a[t]>a[t+1])
	  {
	    c=a[t+1];
		a[t+1]=a[t];
		a[t]=c;
	  }
  for(s=1;s<i;s++)
	  if(a[s]==a[s+1]) b++;
  if(b==i-1) printf("No");
  else
  {
    for(s=i-1;;s--)
		if(a[s]<a[s+1]) 
		{
			printf("%d",a[s]);
			break;
		}
  }
  printf("\n");
}

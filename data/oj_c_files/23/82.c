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
  char a[100];
  gets(a);
  int i,j=0,k;
for(i=0;i<100;i++)
{
	j++;
	if(a[i]=='\0')
	{
     j-=1;
	 break;
	}
}
  for(i=j-1;i>=0;i--)
  {     
	  if(a[i]==' ')
	  {
		  for(k=i+1;k<j;k++)
		  printf("%c",a[k]);
		  printf(" ");
	      j=i;
	  }
  }
  for(i=0;i<j;i++)
	  printf("%c",a[i]);


}


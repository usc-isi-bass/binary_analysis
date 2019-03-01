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


int main()
{
	char zfc[300],sub[300],rep[300],m,k,n;
  int i,j;
  gets(zfc);
  gets(sub);
  gets(rep);
  for(i=0;i<=strlen(zfc)-strlen(sub);i++)
  {m=0;
	  for(j=0;j<strlen(sub);j++)
	  {
		  if(sub[j]!=zfc[i+j])
		  {  m=-1;
		  break;}
		  else
			  m=1;
	  }
	  if(m==1)
	  {
		  n=i;
		  break;
	  }
  }
if(m==1)
{
	for(k=n;k<n+strlen(sub);k++)
	{
		zfc[k]=rep[k-n];
	}

	printf("%s",zfc);}

else
printf("%s",zfc);
return 0;
}

